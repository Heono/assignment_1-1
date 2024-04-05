"""
5명의 사람들에 대한 사람의 성별과 나이를 순서대로 입력받고,
남성의 나이와 여성의 나이를 각각 모두 누적하여 
최종으로 나이의 누적값이 더 큰 성별 및 그 성별의 나이 누적값과 가장 나이가 많은 사람의 성별 및 나이를 순서대로 출력하는 프로그램을 작성하시오.
(남성은 문자 "m", 여성은 문자 "f"로 입력받으며 두 성별의 나이 누적값 혹은 가장 나이가 많은 성별의 나이가 동일하다면 남자로 출력한다. )

[입력 예시 1]
m
17
f
20
m
40
f
35
m
27

[출력 예시 1]
m 84
m 40

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
m 40

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
400

[출력 예시 3]
f 476
f 400


[입력 예시 4]
f
5
f
5
f
5
f
5
f
5

[출력 예시 4]
f 25
f 5


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
m 21
"""


m = 0
f = 0
Max = 0
MaxS = ''

for i in range(5):
    a = input()
    if a == 'm':
        b = int(input())
        m += b
        if b >= Max:
            Max = b
            MaxS = 'm'
    elif a == 'f':
        b = int(input())
        f += b
        if b > Max:
            Max = b
            MaxS = 'f'


if m >= f:
    print('m', m)
else: 
    print('f', f)

print(MaxS, Max)

# 조교님 풀이

male = 0
female = 0
cnt = 0
max = 0
b_s = ""

while (1):
    if cnt == 5:
        break
    s = input("")
    age = int(input(""))
    if max < age:
        b_s = s
        max = age
    if s == 'm':
        male += age
    else:
        female += age
    cnt += 1


if male < female:
    print('f', female)
else: 
    print('m', male)
print(b_s, max)