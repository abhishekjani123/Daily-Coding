try:
    cash,balance = map(float, input().split())
    if cash <= balance-0.5 and cash % 5==0:
        print("%.2f"%(balance-cash-0.50))
    else:
        print("%.2f"%balance)
    
except:
    pass
