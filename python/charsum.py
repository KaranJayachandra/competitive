text = input()
sum = 0
for char in text:
    weight = ord(char) - ord('a') + 1
    sum = sum + weight
print(sum)