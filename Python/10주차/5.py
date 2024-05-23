'''
저장할 파일 이름과 형식, 자연수 n과 m을 입력받고
n부터 m까지의 숫자를 파일에 저장한다.
이후 다시 파일을 불러와서 파일에 입력 받았던 모든 수의 총합을 출력하는 프로그램을 작성하라.
(단, n<=m이다.)

[입력 예시 1]
file.txt
2
8

[출력 예시 1]
35



[입력 예시 2]
file.txt
1
21

[출력 예시 2]
231






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
325





[입력 예시 5]
name.txt
3
4

[출력 예시 5]
7
'''

fileName = input()
s = int(input())
e = int(input())

f = open(fileName, 'w')

for i in range(s, e+1):
    f.write(str(i) + '\n')


f.close()

f = open(fileName, 'r')

sum = 0

while True:
    line = f.readline()
    if not line:
        break
    sum += int(line)


print(str(sum))