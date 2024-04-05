'''
게임을 진행할 횟수를 자연수 n으로 입력 받고 가위/바위/보 중에 하나를 결정하여 문자로 입력 받은 후
n회에 대하여 아래의 설명된 [가위바위보 게임]을 진행하여,
이긴 횟수 / 비긴 횟수 / 진 횟수를 각각 출력하는 프로그램을 작성하라.

[가위바위보 게임]
가위바위보 게임은 각각 내고 싶은 것을 영어 소문자 혹은 대문자로 입력 받는다.
(가위는 s 혹은 S, 주먹은 r 혹은 R,  보는 p 혹은 P로 입력 받는다.)
가위는 보를 이길 수 있으며, 보는 주먹을 이길 수 있고, 주먹은 가위를 이길 수 있다.
, 

[입력 예시 1]
1 -> 게임을 진행할 횟수
s -> 가위로 게임 진행
P -> 보



[출력 예시 1]
Win: 1
Draw: 0
Lose: 0

[입력 예시 2]
2
R
s
S


[출력 예시 2]
Win: 2
Draw: 0
Lose: 0

[입력 예시 3]
3
P
r
S
p

[출력 예시 3]
Win: 1
Draw: 1
Lose: 1

[입력 예시 4]
4
P
s
r
p
r

[출력 예시 4]
Win: 2
Draw: 1
Lose: 1

[입력 예시 5]
1
R
r

[출력 예시 5]
Win: 0
Draw: 1
Lose: 0
'''

n = int(input())
p = input()
pp = 0

if p == 's' or p == 'S': pp = 1
elif p == 'r' or p == 'R': pp = 2
elif p == 'p' or p == 'P': pp = 3

w = 0
d = 0
l = 0

for i in range(n):
    e = input()
    ee = 0
    if e == 's' or e == 'S': ee = 1
    elif e == 'r' or e == 'R': ee = 2
    elif e == 'p' or e == 'P': ee = 3

    if pp == 1:
        if ee == 1: d += 1
        elif ee == 2: l += 1
        elif ee == 3: w += 1
    elif pp == 2:
        if ee == 1: w += 1
        elif ee == 2: d += 1
        elif ee == 3: l += 1
    elif pp == 3:
        if ee == 1: l += 1
        elif ee == 2: w += 1
        elif ee == 3: d += 1


print('Win:', w)
print('Draw:', d)
print('Lose:', l)

