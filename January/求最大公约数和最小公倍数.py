s=[int(n) for n in input().split(",")]
s=s.sort(reverse=True)
for i in range(s[0]):
    if ( s[0]%i==0 and s[1]%i==0 ):
        m=i
        break
print("���Լ��Ϊ",m)