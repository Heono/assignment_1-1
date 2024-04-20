tot = 0
t1 = 1
t2 = 1
t3 = 1

while (tot <= 300):
    n1 = int(input())
    n2 = int(input())

    task = 0

    if n1 == 1: 
        task += 60 * t1
        t1 += 1
    elif n1 == 2: 
        task += 100 * t2
        t2 += 1
    elif n1 == 3: 
        task += 120 * t3
        t3 += 1

    if n2 >= 2 and n2 <= 5: task /= 2
    elif n2 >= 6 and n2 <= 10: task /= 4
    elif n2 >= 11 and n2 <= 20: task /= 10
    elif n2 >= 21: task /= 20

    tot += task
    task = 0

print(int(tot))

