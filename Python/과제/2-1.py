n = int(input())
m = int(input())

sum = 0

for i in range(1, n+1):
    if i % m == 0:
        sum += i

print(sum)