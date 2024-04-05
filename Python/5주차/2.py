'''
두 자연수 n1과 n2를 입력 받아, 
두 자연수 사이의 자연수들이 홀수인지 짝수인지 프로그램을 작성하라.
(단, n1<=n2이고 출력시 두 자연수도 포함하여 출력한다,)

[입력 예시 1]
1
10

[출력 예시 1]
1 ODD
2 EVEN
3 ODD
4 EVEN
5 ODD
6 EVEN
7 ODD
8 EVEN
9 ODD
10 EVEN


[입력 예시 2]
1
1

[출력 예시 2]
1 ODD

[입력 예시 3]
3
9


[출력 예시 3]
3 ODD
4 EVEN
5 ODD
6 EVEN
7 ODD
8 EVEN
9 ODD

[입력 예시 4]
17
41

[출력 예시 4]
17 ODD
18 EVEN
19 ODD
20 EVEN
21 ODD
22 EVEN
23 ODD
24 EVEN
25 ODD
26 EVEN
27 ODD
28 EVEN
29 ODD
30 EVEN
31 ODD
32 EVEN
33 ODD
34 EVEN
35 ODD
36 EVEN
37 ODD
38 EVEN
39 ODD
40 EVEN
41 ODD

[입력 예시 5]
12
16

[출력 예시 5]
12 EVEN
13 ODD
14 EVEN
15 ODD
16 EVEN
'''

n1 = int(input())
n2 = int(input())

for i in range(n1, n2+1):
    if i%2 == 0: print(i, 'EVEN')
    else: print(i, 'ODD')

# 조교님과 똑같이 품