a = int(input())
b = int(input())
c = int(input())

t = a + b + c

if (t % 4 == 0) and (t % 6 == 0):
    print('%d is multiple of 4 and 6'%t)
elif t % 4 == 0:
    print('%d is multiple of 4'%t)
elif t % 6 == 0:
    print('%d is multiple of 6'%t)
else:
    print('%d is not multiple of 4 or 6'%t)