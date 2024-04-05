book = int(input())
num = int(input())

if book == 1:
    if num <= 5:
        print('The Alchemist\n%d'%(5 - num))
    else:
        print('Not exist')
elif book == 2:
    if num <= 5:
        print('Koguryo\n%d'%(5 - num))
    else:
        print('Not exist')
else:
    print('Not exist')
    
