'''
자연수 n을 입력 받고,
중첩 for문을 사용하여 첫 줄을 1부터 n까지 출력한 후 매 줄마다 숫자가 하나씩 줄어들며 출력되는 프로그램을 작성하라.


[입력 예시 1]
5

[출력 예시 1]
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1


[입력 예시 2]
10

[출력 예시 2]
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1


[입력 예시 3]
2

[출력 예시 3]
1 2 
1

[입력 예시 4]
8

[출력 예시 4]
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1


[입력 예시 5]
1

[출력 예시 5]
1
'''

a = int(input())

for y in range(a, 0, -1):
    for x in range(1, y+1):
        print("%d "%x, end='')
    print('')