p1 = int(input())
p2 = int(input())
p3 = int(input())

if p1 >= p2 and p1 >= p3:
    print('Max = %d'%(p1))
elif p2 >= p1 and p2 >= p3:
    print('Max = %d'%(p2))
elif p3 >= p1 and p3 >= p2:
    print('Max = %d'%(p3))

    
