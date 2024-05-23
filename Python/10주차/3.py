'''
딕셔너리 형태로 주어진 세종이의 정보(이름, 나이, 주소)는 아래와 같다.
먼저 딕셔너리에 새로운 정보를 추가하거나 기존의 정보를 변경할 횟수 0 이상의 정수 n을 입력받고,
이후 n개의 추가하거나 변경하기 위한 새로운 정보(key와 value)를 입력받는다.
수정 완료된 세종이의 모든 정보를 출력하는 프로그램을 작성하시오.

user_info = { 'name':'Sejong', 'age':21,            
                  'address':'Seoul’ }


[입력 예시 1]
2
studentID
17011846
address
Suwon

[출력 예시 1]
Information
name : Sejong
age : 21
address : Suwon
studentID : 17011846

[입력 예시 2]
1
favoriteFood
Ramen

[출력 예시 2]
Information
name : Sejong
age : 21
address : Seoul
favoriteFood : Ramen


[입력 예시 3]
3
age
40
age
22
age
21

[출력 예시 3]
Information
name : Sejong
age : 21
address : Seoul


[입력 예시 4]
10
age
22
age
23
age
24
studentID
23110394
age
25
name
KinSejong
score
98
score
96
hobby
Game
age
27

[출력 예시 4]
Information
name : KinSejong
age : 27
address : Seoul
studentID : 23110394
score : 96
hobby : Game



[입력 예시 5]
0

[출력 예시 5]
Information
name : Sejong
age : 21
address : Seoul

'''

n = int(input())

user_info = { 'name':'Sejong', 'age':21, 'address':'Seoul' }

for i in range(n):
    key = input()
    value = input()
    user_info[key] = value

print('Information')
for key, value in user_info.items():
    print(key + ' : ' + str(value))
