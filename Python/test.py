'''
메뉴 4가 입력되어 종료될 때까지 반복적으로 메뉴 번호를 입력받아 구매할 물건의 개수와 총액을 계산 및 출력하시오.
메뉴 1 : 1000원
메뉴 2 : 1500원
메뉴 3 : 2300원
메뉴 4 : 종료

[입력 예시 1]
1
2
3
4

[출력 예시 1]
count : 4, total : 4800

[입력 예시 2]
3
1
2
3
1
4

[출력 예시 2]
count : 6, total : 8100
'''

# 복습문제

cnt = 0
total = 0

while (1):
    i = int(input())
    cnt += 1
    if i == 1: total += 1000
    elif i == 2: total += 1500
    elif i == 3: total += 2300
    elif i == 4: break


print('count : %d, total : %d'%(cnt, total))