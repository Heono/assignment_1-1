a = int(input())
b = int(input())
c = int(input())

average = (a + b + c) / 3
print(f'Average = {average:.2f}')
if average < 60:
    print('FAIL')
elif (a < 40) or (b < 40) or (c < 40):
    print('FAIL')
else:
    print('PASS')