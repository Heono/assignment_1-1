"""
사람들에 대한 사람의 성별과 나이를 순서대로 계속해서 입력받으며 남성의 나이와 여성의 나이를 각각 모두 누적하며,
최종으로 두 성별의 나이 누적값의 합이 100이상이 되면 종료해 나이의 누적값이 더 큰 성별 및 그 성별의 나이 누적값을 출력하는 프로그램을 작성하시오.
(남성은 문자 "m", 여성은 문자 "f"로 입력받으며 두 성별의 나이 누적값이 동일하다면 남자로 출력한다.)

[입력 예시 1]
m
17
f
20
m
40
f
35

[출력 예시 1]
m 57

[입력 예시 2]
m
5
m
7
m
25
m
39
m
40

[출력 예시 2]
m 116

[입력 예시 3]
f
5
f
7
f
25
f
39
f
40

[출력 예시 3]
f 116

[입력 예시 4]
m
100

[출력 예시 4]
m 100


[입력 예시 5]
m
20
f
20
m
21
f
21
m
18

[출력 예시 5]
m 59
"""


s = 0
m = 0
f = 0

while (s < 100):
    a = input()
    if a == 'm':
        t = int(input())
        m += t
        s += t
    elif a == 'f':
        t = int(input())
        f += t
        s += t

if m >= f:
    print("m", m)
else:
    print("f", f)



# 조교님 풀이

male = 0
female = 0
cnt = 0

while(1):
    if cnt >= 100:
        break
    s = input("")
    age = int(input(""))
    if s == 'm':
        male += age
    else:
        female += age
    cnt += age

if male < female:
    print('f', female)
else:
    print('m', male)
    