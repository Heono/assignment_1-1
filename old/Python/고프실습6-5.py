a = int(input())
b = int(input())

for i in range(a):
    for j in range(a):
        if (i+1 == b):
            print('*', end = '')
        else:
            if (j+1) == b:
                print('*', end = '')
            elif (j+1) != b:
                print(' ', end = '')
    print('\n')

for i in range(a):
    for j in range(a):
        if i == b-1 or j == b-1:
            print('*', end = '')
        else:
            print(' ', end = '')
    print()
