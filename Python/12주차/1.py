# 행 (가로)
n = int(input())
# 열 (세로)
m = int(input())
# 세로, 가로
arr = [[0]*m for _ in range(n)]

for i in range(n):
    for j in range(m):
        arr[i][j] = input()

for i in range(n):
    for j in range(m):
        print('%c '%arr[i][j], end='')
    print('')