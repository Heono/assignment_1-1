n = int(input())
a = list()

max = 0

for i in range(n):
    a.append(int(input()))

print('a = ' + str(a))

for i in range(n):
    for j in range(n):
        if i != j and a[i] + a[j] > max: 
            max = a[i] + a[j]

print('Max_Sum = ' + str(max))