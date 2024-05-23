n = int(input())

temp = list()

for i in range(n):
    temp.append(int(input()))

odd = list()
even = list()

for i in range(n):
    if (i+1) % 2 == 0: even.append(temp[i])
    else: odd.append(temp[i])

print('Odd= ' + str(odd) + '\nEven= ' + str(even))