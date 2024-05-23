'''
자연수 n을 입력 받아,
n개의 정수를 순서대로 입력 받고 빈 리스트에 저장한다.
이후 자연수 s와 e를 입력 받아 리스트 슬라이싱을 이용하여
리스트의 s번째 인덱스부터 e번째 인덱스까지 총합과 총곱을 출력하는 프로그램을 작성하라.
(단, 리스트의 인덱스는 0부터 시작하며 s와 e는 최대 n-1까지이다. )


[입력 예시 1]
4
10
-6
5
0
1
3

[출력 예시 1]
Sum= -1
Mul= 0

[입력 예시 2]
10
1
2
3
4
5
6
7
8
9
10
3
8

[출력 예시 2]
Sum= 39
Mul= 60480


[입력 예시 3]
1
100
0
0

[출력 예시 3]
Sum= 100
Mul= 100


[입력 예시 4]
7
10
-5
0
98
-123
49
59
3
5

[출력 예시 4]
Sum= 24
Mul= -590646



[입력 예시 5]
20
123
20
-5
40
-99
1000
0
-5
-232
99
121
56
2
1
121
22
30
-5
9
-1002
11
19

[출력 예시 5]
Sum= -766
Mul= 403299388800
'''

a = []

n = int(input())

for i in range(n):
    a.append(int(input()))


s = int(input())
e = int(input())

sum = 0
mul = 1

for i in range(s, e+1):
    sum += a[i]
    mul *= a[i]


print('Sum= %d\nMul= %d'%(sum, mul))