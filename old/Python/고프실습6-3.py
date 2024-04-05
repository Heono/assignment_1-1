a = int(input())
b = int(input())

for i in range(a):
    for j in range(60):
        print('%02d:%02d'%(i, j))

for i in range(b+1):
    print('%02d:%02d'%(a, i))