h = int(input())
m = int(input())

i = int(input())
n = int(input())

t = h*60 + m

for a in range(t, t+(i*n), i):
    if a >= 22*60:
        print('Emergency!')
        break
    else:
        H = a//60
        M = a%60
        print('%02d:%02d Carrot Time!'%(H, M))

