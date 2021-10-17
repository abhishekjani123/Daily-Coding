t=int(input()) #total case
for i in range(0,t):
    n,K=list(map(int,input().split())) #size and max possibilities
    a=list(map(int,input().split())) #elements
    
    ele=[]

    for j in range(0,31):
        ele.append(0)

        for p in range(0,n):
            if a[p]%2!=0:
                ele[j]+=1
            a[p]=int(a[p]/2)
    res=0

    for j in range(0,31):
        if(ele[j]%K==0):
            res+=ele[j]/K

        else:
            res+=int(ele[j]/K)+1
    print(int(res))
