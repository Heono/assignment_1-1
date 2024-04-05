'''
# 2-2
n1 = input()
n2 = input()

tmp = n2 
n2 = n1
n1 = tmp

print('n1 = {0}\nn2 = {1}'.format(str(n1), str(n2)))

'''

'''
# 2-3
cost = input()

print('before = {0}\nafter = {1}'.format(str(cost), str(int(float(cost)*(9/10)))))
'''

'''
# 2-4
a = input()
num = int(input())
print('Result = ' + a*num)
'''

# 2-5
n = int(input())
print('x %d' %n)
for i in range(1, 10):
    print('%d x %d = %d' %(n, i, n*i))
