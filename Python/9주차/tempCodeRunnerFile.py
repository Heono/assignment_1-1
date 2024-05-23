h = int(input())
m = int(input())
s = int(input())
p = int(input())

if h < 0 or m < 0 or s < 0 or p < 0: 
    print("error")

t = h * 60 * 60 + m * 60 + s + p

if t > 24 * 60 * 60: t -= 24 * 60 * 60

h = t // (60 * 60)
t %= (60 * 60)
m = t // 60
t %= 60
s = t

print("%02d:%02d:%02d"%(h, m, s))
