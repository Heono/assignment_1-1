y = int(input())
sm = int(input())
em = int(input())
sd = int(input())
ed = int(input())

for m in range(sm, em+1):
    for d in range(sd, ed+1):
        print('%04d/%02d/%02d'%(y, m, d), end='')
        if (m == d): print(' Lucky Day!')
        else: print('')