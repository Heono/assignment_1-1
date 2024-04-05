a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

for i in range(b, c+1):
    for j in range(d, e+1):
        if i % 2 == 0 and j == 31: continue
        if i == j: print("%02d%02d%02d Lucky Day!"%(a, i, j)); continue
        print("%02d%02d%02d"%(a, i, j))