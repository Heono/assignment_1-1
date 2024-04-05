a = int(input())
b = 0

while (a != 0):
    b *= 10
    b += a % 10
    a = int(a / 10)

print(b)