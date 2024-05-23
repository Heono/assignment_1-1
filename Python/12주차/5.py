n = int(input())
a = list()

for i in range(n):
    a.append(int(input()))

for i in range(n-1):
    for j in range(n-1):
        if a[j] > a[j+1]:
            t = a[j]
            a[j] = a[j+1]
            a[j+1] = t

print('Up =', a)

for i in range(n-1):
    for j in range(n-1):
        if a[j] < a[j+1]:
            t = a[j]
            a[j] = a[j+1]
            a[j+1] = t

print('Down =', a)