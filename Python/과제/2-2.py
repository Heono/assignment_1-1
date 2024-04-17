n = int(input())

o = 1

for i in range(1, n+1):
    for j in range(1, 2*i+1):
        o *= j
    print(o)
    o = 1