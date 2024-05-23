# **************** 복습하기
n = int(input())

a = []

index = 0
f = 0

for i in range(n):
    t = int(input())
    for j in range(index):
        if a[j] == t: 
            f = 1
            break
    if f == 0: 
        a.append(t)
        index += 1
    f = 0

print(a)