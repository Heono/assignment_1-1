'''
저장할 파일 이름과 형식, 자연수 n과 m을 입력받고
n부터 m까지의 숫자를 파일에 저장한다.
이후 다시 파일을 불러와서 각 숫자를 순서대로 읽어서 출력하는 프로그램을 작성하라.
(단, n<=m이다.)

[입력 예시 1]
file.txt
2
8

[출력 예시 1]
2
3
4
5
6
7
8



[입력 예시 2]
file.txt
1
21

[출력 예시 2]
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
11
12
13
14
15
16
17
18
19
20
21






[입력 예시 3]
name.txt
1
1

[출력 예시 3]
1





[입력 예시 4]
file.txt
19
31

[출력 예시 4]
19
20
21
22
23
24
25
26
27
28
29
30
31





[입력 예시 5]
name.txt
3
4

[출력 예시 5]
3
4
'''

fileName = input()
s = int(input())
e = int(input())

f = open(fileName, 'w')

for i in range(s, e+1):
    f.write(str(i) + '\n')


f.close()

f = open(fileName, 'r')

while True:
    line = f.readline()
    if not line:
        break
    print(line, end='')