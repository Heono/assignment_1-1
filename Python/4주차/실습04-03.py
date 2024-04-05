"""
주사위 눈이 6이 나올 때 까지 주사위를 계속해서 던지며,
눈이 짝수일 때와 눈이 홀수일 때 값을 각각 누적하여 
최종적으로 눈이 짝수일때의 누적값과 홀수일때의 누적값을 각각 출력하는 프로그램을 작성하시오.
(단, 주사위 눈이 6이 나왔을 때도 짝수 누적값에 값을 누적해준다.)

[입력 예시 1]
3
5
2
4
6

[출력 예시 1]
Odd=8, Even=12


[입력 예시 2]
5
9
7
6

[출력 예시 2]
Odd=21, Even=6


[입력 예시 3]
6

[출력 예시 3]
Odd=0, Even=6


[입력 예시 4]
1
3
5
3
1
3
5
6

[출력 예시 4]
Odd=21, Even=6

[입력 예시 5]
2
4
2
4
2
4
2
4
2
4
6

[출력 예시 5]
Odd=0, Even=36
"""

o = 0
e = 0
i = 0

while (1):
    a = int(input())
    if a % 2 == 0: e += a
    else: o += a
    if a == 6: break

print('Odd=%d, Even=%d'%(o, e))


# 조교님 풀이
odd = 0
even = 0

while(1):
    n = int(input(""))
    if n == 6:
        even += n
        break
    if n%2 == 0:
        even += n
    else: 
        odd += n

print('Odd=%d, Even=%d'%(odd, even))

