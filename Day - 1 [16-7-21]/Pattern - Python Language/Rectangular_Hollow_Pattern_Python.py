rows,cols = map(int,input().split())
for i in range(0,rows,1):
    for j in range(0,cols,1):
        if i==0 or i==rows-1:
            print("*",end = ' ')
        elif j==0 or j==cols-1:
            print("*",end = ' ')
        else:
            print(" ",end=' ')
    print('')
