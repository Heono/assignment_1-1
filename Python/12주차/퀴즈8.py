n = int(input())
a = []
b = []
c = []

f = 0

index = 0

for i in range(n):
    t = int(input())
    for j in range(index):
        if a[j] == t: 
            f = 1
            break
    if f == 0:
        a.append(t)
        b.append(t)
        index += 1
    f = 0

#b = a 이렇게 쓰면 안됨

for i in range(index-1):
    for j in range(index-1):
        if a[j] > a[j+1]:
            t = a[j]
            a[j] = a[j+1]
            a[j+1] = t

print('Up =', a)

for i in range(index-1):
    for j in range(index-1):
        if b[j] < b[j+1]:
            t = b[j]
            b[j] = b[j+1]
            b[j+1] = t

print('Down =', b)


for i in range(index):
    c.append(a[i] + b[i])

print('Final =', c)