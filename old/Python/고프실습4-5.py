c = 0
t = 0

while t < 20:
    n = input()
    c += 1
    
    if n == '4':
        break

    t += int(n)

print('Count = {0}\nTotal = {1}'.format(str(c), str(t)))