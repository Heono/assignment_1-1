a = int(input())
b = int(input())
c = 0

if a >= 19:
    c += 19000
else:
    c += 13000

if b >= 19:
    c += 19000
else:
    c += 13000

print("%d"%c)
