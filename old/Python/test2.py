'''
n1 = input()
n2 = input()
n3 = input()

print('Min =', min(n1, n2, n3))
'''

'''
a = int(input())
b = int(input())
sum = a + b

if sum >= 10:
    print('sum >= 10')
elif sum <= 5:
    print('sum <= 5')
else :
    print('5 < sum < 10')
'''

a = int(input())
b = int(input())

if (a + b) % 6 == 0:
    print(str(a + b), 'is multiple of 3 and 6')
elif (a + b) % 3 == 0:
    print(str(a + b), 'is multiple of 3')
else:
    print(str(a + b), 'is not multiple of 3 or 6')

