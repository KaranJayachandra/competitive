text = input()
x = 0
y = 0
for char in text:
    if char == 'z':
        x = x + 1
    elif char == 'o':
        y = y + 1

if (2*x==y):
    print('Yes')
else:
    print('No')