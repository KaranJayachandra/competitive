import decimal

n = input()
numbers = input().split()
solution = 1
for number in numbers:
    solution = (solution * int(number))%(10**9+7)
print(solution)