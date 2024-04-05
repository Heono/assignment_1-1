n = 0
total = 0
c = 0


while n < 1000:
    n = int(input())
    if n == 0:
        break
    total += n
    c += 1

if n == 0:
    print('Count = %d\nBalance = %d'%(c, total))
else:
    print('Count = %d\nBalance = %d'%(c, total - 1000))
