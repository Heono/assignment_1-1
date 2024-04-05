a = int(input())
b = int(input())

r = a * (b % 10)
r += a * (b // 10)

print('Result =', r)