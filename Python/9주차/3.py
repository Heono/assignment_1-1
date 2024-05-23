n = int(input())

def countEvenNums(a):
    cnt = 0
    for i in range(1, a+1):
        if i % 2 == 1: cnt += 1
    
    return cnt


print("The number of evens is", countEvenNums(n))