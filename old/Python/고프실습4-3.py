n = int(input())
f = 1
c = 1
while f < n:
    f = f * c
    c += 1

print('Num = {0}\nTotal = {1}'.format(str(c-1), str(f)))