h = int(input())
m = int(input())
i = int(input())
c = int(input())
t = h*60 + m

for a in range(t, t+i*c, i):
    if a >= 22*60: 
        print('Emergency!')
        break

    H = a//60
    M = a%60
    print('%02d:%02d Carrot Time!'%(H, M))