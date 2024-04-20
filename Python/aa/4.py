n1 = int(input())
n2 = int(input())

a = 1
b = 0


for i in range(n1, n2+1):
    for j in range(n1, n2+1):
        a = i*j
        while (a):
            b = b * 10 + a % 10
            a //= 10
        if (i <= j and b == i*j): print('%d %d'%(i, j))
        b = 0

# 16 * 17 17 *