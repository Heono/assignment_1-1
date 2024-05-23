# 문제 예시 잘보자
n = int(input())
t = list()

for i in range(n):
    t.append(int(input()))

if n % 2 == 0:
    k = n // 2
    if (t[k-1] > t[k]): k -= 1
else: 
    k = (n - 1) // 2

print('Mid= ' + str(t[k]) + '\nIndex= ' + str(k))



