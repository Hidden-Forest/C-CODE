m=int(input("��������������ȷ�����䷶Χ:"))
n=int(input())
numbers=[]
for i in range(m,n):
    for j in range(2,i):
        if i==(j-1):
            numbers.append(i)
print(numbers)




