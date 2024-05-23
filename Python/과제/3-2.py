even = list()

for i in range(10):
    n = int(input())
    if n <= 0:
        print('ERROR')
        exit()

    print('ADD')

    if n % 2 == 0:
        even.append(n)
        


print(str(even))