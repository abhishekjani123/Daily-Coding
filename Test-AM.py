t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))[:n]
    l.sort()
    a = 0
    for i in range(n):
        c=0
        c1=0
        for j in range(n):
            if(l[j]<=l[i]):
                c = c+1
            else:
                c1=c1+1
        if(c>c1):
            a = a+1
    print(a)
