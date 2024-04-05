a = int(input())
b = int(input())

for i in range(a, b+1):
    for j in range(1, 10):
        print('%d X %d = %d'%(i, j, i*j))