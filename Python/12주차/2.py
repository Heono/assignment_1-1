# 행 (가로)
n = int(input())
# 열 (세로)
# 세로, 가로
arr = [[0]*n for _ in range(n)]
a = 1

arr2 = []

for i in range(n):
    for j in range(n):
        arr[i][j] = a
        a += 1

# 전치행렬 구하기
for i in range(n):
    tmp = []
    for j in range(n):
        try:
            tmp.append(arr[j][i])
        except:
            tmp.append(0)
    arr2.append(tmp)

for i in range(n):
    for j in range(n):
        print('%d '%arr2[i][j], end='')
    print('')