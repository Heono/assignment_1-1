a = int(input())
b = input()
c = input()


print('color 1 values(RGB):' + b)
print('color 2 values(RGB):' + c)

# 100 빨 010 초 110 노 001 파

if a == 1:
    if (b == '100' and c == '010'):
        print('Red and Green')
    elif (b == '010' and c == '100'):
        print('Green and Red')
    elif (b == c):
        print('Just same colors')
elif a == 2:
    if (b == '110' and c == '001'):
        print('Yellow and Blue')
    elif (b == '001' and c == '110'):
        print('Blue and Yellow')
    elif (b == c):
        print('Just same colors') 