n=int(input("enter the number "))
a,m=0,1

for i in range(1,n):
    m=m*2
    if m==n:
        a=a+1
if a !=0:
    print("yes power of 2")
    print(n*2)
else:
    print("not power of 2")
