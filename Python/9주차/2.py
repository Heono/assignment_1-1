n1 = int(input())
n2 = int(input())

operator = input()

def calc(a, b, c):
    if c == 'sum': return a + b
    elif c == 'min': return a - b
    elif c == 'div': return int(a / b)
    elif c == 'mul': return a * b

print(calc(n1, n2, operator))