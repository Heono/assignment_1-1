import time
n = int(input())

'''
n = 5
12345 678910
OOXOO OOXOO OOXOO OOXOO OOXOO
OXXXO OXXXO OXXXO OXXXO OXXXO
XXXXX XXXXX XXXXX XXXXX XXXXX 
OXXXO OXXXO OXXXO OXXXO OXXXO 
OOXOO OOXOO OOXOO OOXOO OOXOO 


n = 3
OXO OXO OXO 
XXX XXX XXX 
OXO OXO OXO 
'''

p = ''

'''
for i in range(n):
    for y in range(n-1, -1, -1):
        for x in range(n):
            #if y >= -x + (n-1)/2 and y <= x + (n-1)/2 and y >= x - (n-1)/2 and y <= -x + 3*(n-1)/2: p += 'X'
            if (x-(n-1)/2)**2 + (y-(n-1)/2)**2 <= ((n-1)/2)**2: p += 'O'
            else : p += ' '

        print(p)
        p = ''
    # time.sleep(0.5)
'''

for y in range(n-1, -1, -1):
        for x in range(n):
            #if y >= -x + (n-1)/2 and y <= x + (n-1)/2 and y >= x - (n-1)/2 and y <= -x + 3*(n-1)/2: p += 'X'
            #if (x-(n-1)/2)**2 + (y-(n-1)/2)**2 <= ((n-1)/2)**2: p += 'o'
            if (y - (n-1)/2)**2 == x: p += 'o'
            else : p += ' '

        print(p)
        p = ''
