n = int(input())

for y in range(2*(n-1), -1, -1):
    for x in range(2*n):
        if (y >= -x + n - 1 and y >= x - n + 1 and y <= x + n - 1 and y <= -x + 3*(n-1)):
            print('o', end='')
        else: 
            print(' ', end='')

    print('')

for y in range((n-1), -1, -1):
    for x in range(n):
        if (y == x or y == -x + (n-1)):
            print("X ", end = '')
        else: 
            print("O ", end = '')
    print('')