n = int(input())

people = list()

for i in range(n):
    people.append(input())

people.sort()

print('people: ' + str(people))