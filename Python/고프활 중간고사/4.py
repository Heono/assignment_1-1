'''
[ 문제 4 ] 학번 생성 프로그램 (30점)

학번 입력 및 생성 횟수 n을 입력 받고 다음의 조건에 따라 학번을 생성하여라.
    - '출생년도, 학과, 번호' 세 가지 정보를 이용하여 순서대로 학번을 생성한다.
    - 출생년도를 입력 받고 출력 시에는 출생년도에서 20을 더한 값을 사용한다.
    - 학과는 간단히 'math, english, korean'로 입력 받고 각 과목은 출력 예시와 같이 'math -> 01', 'english -> 02', 'korean -> 03'으로 출력한다.
    - 번호가 한 자리 수인 경우 '01'과 같이 입력된다.

    입력 예시 1
    ------------
    2
    2000
    math
    10
    2002
    english
    23
    ------------
    출력 예시
    ------------
    20200110
    20220223
    ------------

    입력 예시2
    ------------
    1
    1998
    korean
    01
    ------------
    출력 예시
    ------------
    20180301
    ------------
'''

num = int(input())
string = ''

for k in range(num):
    year = input()
    major = input()
    tail = input()

    year = str(int(year) + 20)

    if major == 'math': major = '01'
    if major == 'english': major = '02'
    if major == 'korean': major = '03'
    string = year + major + tail
    print(string)

