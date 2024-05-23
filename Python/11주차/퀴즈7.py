n = int(input())

v = [ 'a', 'e', 'i', 'o', 'u' ]

t = list()

f = False

a = list()
b = list()

for i in range(n):
    t.append(input())

for i in t:
    for j in v:
        if i == j: 
            f = True
            break
    if f == True:
        a.append(i)
    else:
        b.append(i)
    f = False

# len(a) a 배열 요소 개수 
# a.count('e') a 배열의 'e' 개수
for i in range(n):
    if i < len(b): print(b[i], end='')
    if i < len(a): print(a[i], end='')
