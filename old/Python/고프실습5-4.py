r = 0
for i in range(0, 10):
    a = input()
    if a == 'yellow': continue
    elif a == 'red': break
    else :
        b = int(input())
        r += b

print('Sum =', r)