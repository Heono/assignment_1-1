n = int(input())
t = list()

m = 0
mI = 0

for i in range(n):
    t.append(int(input()))

for i in range(n):
    if t[i] > m:
        m = t[i]
        mI = i

print('Max= ' + str(m) + '\nIndex= ' + str(mI))