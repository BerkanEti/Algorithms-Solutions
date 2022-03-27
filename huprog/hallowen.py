n=int(input())
liste=list(map(int,input().split(" ")))
extra=int(input())


sum=0
max=0
for i in liste:
    if i>max:
        max=i
    sum=sum+i

max=max*n
result=(extra-(max-sum))
if result>=0 and result%n ==0:
    print(1)
else:
    print(0)    
