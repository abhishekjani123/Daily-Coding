# cook your dish here
class cvb:
  def __init__(self, n):
    self.n = n
    self.i = 0
    self.pali = [0]*n
    self.preSum = [0]*n
     
  def add(self, val):
    self.pali[self.i] = val
    self.preSum[self.i] = val
    if self.i != 0:
      self.preSum[self.i] += self.preSum[self.i-1]
    self.i = self.i+1
   
  def isFull(self):
    return self.i == self.n
       
  def getpreSuminRANGE(self, L, R):
    return self.preSum[R]-self.preSum[L]
       
  def getfirstpali(self, index):
    return self.pali[index]
 
     
def createOddPalin(inp):
  n = inp
  palin = inp
  n = n//10
  while n > 0:
    palin = palin*10+(n%10)
    n = n//10
  return palin;
 
 
def generatepali(cvb):
  i = 1
  while not cvb.isFull():
    cvb.add(createOddPalin(i))
    i = i+1
   
 
def solve(L, R, cvb):
    power = cvb.getpreSuminRANGE(L-1, R-1);
    base = cvb.getfirstpali(L-1);
    return pow(base, power, 1000000007);
 
cvb = cvb(100001)
generatepali(cvb)
q = int(input())
while q > 0:
    q = q-1
    line = input().split(" ")
    L, R = int(line[0]), int(line[1])
    print(solve(L, R, cvb))
