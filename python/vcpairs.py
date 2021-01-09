def isvowel(char):
    if (char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u'):
        return True
    else:
        return False

n = int(input())
solution = []
for i in range(n):
    length = input()
    text = input()
    count = 0
    for i in range(len(text)-1):
        if (isvowel(text[i+1]) and (not isvowel(text[i]))):
            count = count + 1
    solution.append(count)

for number in solution:
    print(number)