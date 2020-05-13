import pandas as pd
import matplotlib.pyplot as plt
import datetime
import matplotlib as mpl
import numpy as np
from pyecharts import Map
import math
from scipy.optimize import curve_fit
data=pd.read_csv("virus.csv")
province_set={'����':11177,'�㶫':725,'�㽭':724,'����':566,'����':521,'����':408,\
          '����':391,'����':312,'����':271,'ɽ��':259,'�Ĵ�':254,'����':212,\
          '�Ϻ�':203,'����':179,'����':128,'����':127,'������':121,'����':114,\
          '�ӱ�':113,'����':73,'����':71,'ɽ��':66,'���':56,'����':51,'����':46,\
          '���ɹ�':34,'����':31,'����':31,'�½�':24,'���':15,'�ຣ':13,'̨��':10,\
          '����':8,'����':1}
province=list(province_set.keys())
value=list(province_set.values())
starttime=datetime.datetime(2020,1,23)  #������ʼʱ��
endtime=datetime.datetime(2020,2,3)   #������ֹʱ��
interval=datetime.timedelta(days=1)  #ʱ����
dates=mpl.dates.drange(starttime,endtime,interval)
def fun(x,a,u,sig):
    return a*np.exp(-(x-u)**2/(2*sig**2))/(sig*math.sqrt(2*math.pi))  #�����˹����
x=np.arange(1,12,1)
y=np.array(data['numbers'])
ymean=np.mean(y)
y_mean=np.zeros((1,11))
for i in range(11):
    y_mean[:,i]=ymean
popt,pcov=curve_fit(fun,x,y)
a=popt[0]
u=popt[1]
sig=popt[2]
yvals=fun(x,a,u,sig)
R=1-np.sum((y-yvals)**2)/np.sum((y-y_mean[0])**2)   #����Ŷ�
print("��˹��ϵ�����Ŷ��ǣ�",'%.4f'%R)   #����Ŷ���0.9987(��ȷ��С�������λ)
print("Ԥ�Ʒ�ֵʱ�ڵ��ۼ�ȷ������Ϊ��",int(round(fun(u,a,u,sig))))
print("Ԥ�Ʒ�ֵʱ��Ϊ1��23�����"+str(int(round(u)))+"������")
fig=plt.figure()
ax1=fig.add_subplot(131)
ax1.plot_date(dates,data['numbers'],'-*',label='Cumulative number of confirmed')
for x,y in zip(dates,data['numbers']):
    plt.text(x,y,y)
ax1.plot_date(dates,yvals,'-*',label='Gaussian Fitting')
ax1.grid()
ax2=fig.add_subplot(132)
ax2.plot_date(dates,data['death'],'-*',label='Death Toll')
for x,y in zip(dates,data['death']):
    plt.text(x,y+8,y)
ax2.plot_date(dates,data['cure'],'-*',label='The Number Of Cure')
for x,y in zip(dates,data['cure']):
    plt.text(x,y-10,y)
ax2.grid()
ax3=fig.add_subplot(133)
ax3.plot_date(dates,yvals,'-*',label='Gaussian Fitting')
for x,y in zip(dates,yvals):
    plt.text(x,int(y),int(round(y)))
ax3.grid()
fig.autofmt_xdate()
ax1.legend()
ax2.legend()
ax3.legend()
plt.show()
map = Map("�����ͼ",'�����ͼ', width=1200, height=500)
map.add("�ۼ�ȷ������", province, value, visual_range=[0,1000], maptype='china', is_visualmap=True,\
        visual_text_color='#333',is_map_symbol_show=True)
map.show_config()
map.render(path="�����ͼ.html")
