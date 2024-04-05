n1 = int(input())
n2 = int(input())
n3 = int(input())

max = 0

if (n1 >= n2):
    max = n1
    if (n3 >= max):
        max = n3
else :
    max = n2
    if (n3 >= max):
        max = n3

print("Max", max)

#조교님 풀이 n1, n2, n3 입력은 생략
max = n1
if n2 > max:
    max = n2
if n3 > max:
    max = n3

print("Max", max)