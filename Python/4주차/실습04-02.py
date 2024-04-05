"""
문자 ";"가 입력될 때까지 문자와 문자를 반복해서 출력할 횟수를 순서대로 입력받아,
한번에 출력하는 프로그램을 작성하시오.

[입력 예시 1]
#
5
;

[출력 예시 1]
#####

[입력 예시 2]
4
10
;

[출력 예시 2]
4444444444

[입력 예시 3]
?
3
!
5
;

[출력 예시 3]
???!!!!!

[입력 예시 4]
a
1
p
2
l
1
e
1
;

[출력 예시 4]
apple

[입력 예시 5]
g
1
r
1
e
2
n
1
;

[출력 예시 5]
green
"""

a = input()

while (a != ';'):
    b = int(input())
    for i in range(b):
        print(a)
    a = input()

# 조교님 풀이
string = ""
cnt = 0
while(1):
    k = input()
    if k == ";":
        break
    n = int(input())
    string += (k*n)

print(string)