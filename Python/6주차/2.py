'''
자연수 n1과 n2를 입력 받고,
구구단을 n1단 부터 n2단 까지 출력하는데 각 단은 각 단에 해당하는 숫자까지만 출력하는 프로그램을 작성하라.
(단, n1<=n2<=9이며,  4단일 때는 4*4까지만 출력하며, 5단일 때는 5*5까지만 출력한다.)


[입력 예시 1]
4
5

[출력 예시 1]
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25


[입력 예시 2]
2
9

[출력 예시 2]
2 * 1 = 2
2 * 2 = 4
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81


[입력 예시 3]
3
3

[출력 예시 3]
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9


[입력 예시 4]
4
8

[출력 예시 4]
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64


[입력 예시 5]
2
5

[출력 예시 5]
2 * 1 = 2
2 * 2 = 4
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
'''

a = int(input())
b = int(input())

for i in range(a, b+1):
    for j in range(1, i+1):
        print("%d * %d = %d"%(i, j, i*j))