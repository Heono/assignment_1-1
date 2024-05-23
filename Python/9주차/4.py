n1 = int(input())
n2 = int(input())

def get_lcm(a, b):
    return ((a * b) / get_gcd(a, b))

def get_gcd(a, b):
    if a % b == 0: 
        return b
    else: 
        return get_gcd(b, a % b) # 그냥 get_gcd 하면 안됨 무조건 return 써야함

print(int(get_lcm(n1, n2)))
