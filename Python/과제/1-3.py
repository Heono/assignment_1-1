k1 = int(input())
e1 = int(input())
k2 = int(input())
e2 = int(input())

if k1 < 60 or k2 < 60 or e1 < 60 or e2 < 60: 
    print('F')
    exit()


a1 = (k1 + e1) / 2
a2 = (k2 + e2) / 2

f = a1
if a2 > a1: f = a2

if f >= 90: print('A+')
elif f >= 80: print('A')
elif f >= 70: print('B+')
elif f >= 60: print('B')