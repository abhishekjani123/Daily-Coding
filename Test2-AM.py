t = int(input())
for i in range(t):
    n,k = map(int,input().split())
    ans = 2(n-k)
    ans += 2((k-1)//2)
    print(ans)
