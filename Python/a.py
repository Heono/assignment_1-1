word = ''

while (1):
    i = input()

    if (i == '?' or i == '!'): continue
    elif (i == ';'): break
    ic = int(input())

    word += i * ic


print(word)
