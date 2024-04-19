result = ""
while True:
    char = input()
    if char == ";":
        break
    elif char == "-":
        continue
    else:
        num = int(input())
        result += char * num

print("Result =", result)
