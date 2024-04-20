t = int(input())
s = 0

for i in range(t):
    a = input()
    b = int(input())
    if a == 'PLUS':
        s += b
    elif a == 'SUB':
        s -= b
    elif a == 'MUL':
        s *= b
    elif a == 'DIV':
        s = int(s/b + 0.5)


print('%d'%s)
# Type or paste your code in this area

''''''

day = int(input())
M = 0
m = 500
Md = 0
md = 0
s = 0

for i in range(1, day + 1):
    a = int(input())
    if a > M:
        M = a
        Md = i
    if a < m:
        m = a
        md = i
    if a >= 100:
        s = 1

print('Day %d\nDay %d'%(Md, md))

if s == 1:
    print('O')

''''''

a = int(input())
b = int(input())
c = int(input())

if (c - a >= 210):
    print('Noodle is GOOD')
else:
    print('Noodle is bad')
if (c - b <= 30):
    print('Egg is GOOD')
else:
    print('Egg is bad')


''''''

a1 = input()
a2 = int(input())
a3 = int(input())

b1 = input()
b2 = int(input())
b3 = int(input())

c1 = input()
c2 = int(input())
c3 = int(input())


print(a1, end = '')
print(' %03d %d'%(a2, a3*a2))

print(b1, end = '')
print(' %03d %d'%(b2, b3*b2))

print(c1, end = '')
print(' %03d %d'%(c2, c3*c2))

print('%d'%(a2*a3 + b2*b3 + c2*c3))
# Type or paste your code in this area

