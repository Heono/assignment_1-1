# 행 (가로)
n = int(input())
# 열 (세로)
# 세로, 가로
arr = [[0]*n for _ in range(n)]
a = 1

for i in range(n):
    for j in range(n):
        if i == 0: arr[i][j] = j + 1
        elif j == 0 : arr[i][j] = i + 1 

for i in range(n):
    for j in range(n):
        if arr[i][j] == 0:
            arr[i][j] = arr[i][0] + arr[0][j]

for i in range(n):
    for j in range(n):
        print('%d '%arr[i][j], end='')
    print('')