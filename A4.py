T = int(input()) #Total number of testcase
for i in range(T):
    g,c = map(int, input().split()) #define saperate elements
    v = c*c
    cheight = int(v/(2*g))
    print(cheight)
