n = int(input())

a = n
b = 0
c = ''

n1 = 0
n2 = 0

while (n):
    b = b*10 + n%10
    n //= 10

n = b
b = 0

sum = 0

while (n):
    n1 = n % 10
    n // 10

    if (n1 % 2 == 0 and n2 % 2 == 0): 
        c = '+'
        
    elif (n1 % 2 == 1 and n2 % 2 == 1): 
        c = '-'
    else: 
        c = '*'
        b = b*10 + n1

    if c == '+':
        sum

    n2 = n1
