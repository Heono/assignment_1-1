n1 = int(input())
n2 = int(input())

if n1 > n2:
    tmp = n1
    n1 = n2
    n2 = tmp
    print('Swap\nn1 = %d\nn2 = %d'%(n1, n2))
elif n2 > n1:
    print('No Swap\nn1 = %d\nn2 = %d'%(n1, n2))
else:
    print('Equal\nn1 = %d\nn2 = %d'%(n1, n2))