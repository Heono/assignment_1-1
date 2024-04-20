tot = int(input())
tot_h = 0

for i in range(tot):
    task_n = int(input())
    man_n = int(input())

    task_h = 1

    if task_n == 1: task_h *= 60
    elif task_n == 2: task_h *= 100
    elif task_n == 3: task_h *= 120

    if man_n >= 2 and man_n <= 5: task_h /= 2
    elif man_n >= 6 and man_n <= 10: task_h /= 4
    elif man_n >= 11 and man_n <= 20: task_h /= 10
    elif man_n >= 21: task_h /= 20

    tot_h += int(task_h)

print(tot_h)