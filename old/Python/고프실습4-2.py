c = 0
t = 0

while True:
    n = input()
    c += 1
    t += int(n)
    if n == '4':
        break

print('Count = {0}, Total = {1}'.format(str(c), str(t)))