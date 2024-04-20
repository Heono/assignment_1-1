'''
a = int(input())
b = int(input())
c = int(input())


x1 = (-b + (b**2 - 4*a*c)**(1/2)) / 2*a
x2 = (-b - (b**2 - 4*a*c)**(1/2)) / 2*a


print('(%d)x^2 + (%d)x + (%d) = 0'%(a, b, c))
print('x1 = %f\nx2 = %f'%(x1, x2))
'''

x1 = int(input())
y1 = int(input())
z1 = int(input())

x2 = int(input())
y2 = int(input())
z2 = int(input())

# x1 y1 z1
# x2 y2 z2
# y1z2 - z1y2, -(x1z2-z1x2), x1y2 - y1x2
# 1 0 0
# 0 1 0

print('< %d, %d, %d >'%(y1*z2 - z1*y2, -(x1*z2 - z1*x2), x1*y2 - y1*x2))