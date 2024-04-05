'''
2 이상의 자연수 변수 n을 입력 받고, for문을 사용하여 
자연수 1 부터 n 까지의 홀수들을 모두 곱한 결괏값과 짝수들을 모두 곱한 결괏값을 각각 계산하여 출력하는 프로그램을 작성하라.



[입력 예시 1]
10

[출력 예시 1]
Odd= 945
Even= 3840


[입력 예시 2]
5

[출력 예시 2]
Odd= 15
Even= 8


[입력 예시 3]
2

[출력 예시 3]
Odd= 1
Even= 2


[입력 예시 4]
3

[출력 예시 4]
Odd= 3
Even= 2


[입력 예시 5]
20

[출력 예시 5]
Odd= 654729075
Even= 3715891200
'''

n = int(input())
o = 1
e = 1

for i in range(1, n+1):
    if i % 2 == 0: e *= i
    else: o *= i

print('Odd= %d\nEven= %d'%(o, e))


# 조교님 풀이
n = int(input())

odd = 1
even = 1

for i in range(1, n+1):
    if i % 2 == 0:
        even *= i
    else:
        odd *= i

print('Odd=', odd)
print('Even=', even)
