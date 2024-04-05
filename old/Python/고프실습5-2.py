a = int(input())
s1 = 0
s2 = 0
for i in range(1, a + 1):
    if (i%2==0): s1 += i
    else: s2 += i

print('Sum1 =', s2, '\nSum2 =', s1)