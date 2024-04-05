'''
[문제]
초(second) 값을 입력 받고, 일, 시, 분, 초로 나누어 출력하는 프로그램을 작성하라.


[입력 예시 1]
120000

[출력 예시 1]
1 days 09:20:00

[입력 예시 2]
407

[출력 예시 2]
0 days 00:06:47
'''

sec = int(input())

d = sec // (60*60*24)
sec %= (60*60*24)
h = sec // (60*60)
sec %= (60*60)
m = sec // 60
s = sec % 60

#https://dojang.io/mod/page/view.php?id=2300
print('%d days %02d:%02d:%02d' %(d, h, m ,s))
