rows = int(input())
a = 0
for i in range(1,rows+1,1):
    for j in range(0,i,1):
        a+=1
        print(a,end=' ')
    print('')
