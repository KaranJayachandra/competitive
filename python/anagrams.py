from collections import Counter

n = int(input())
solution = []

for i in range(n):
    a = input()
    b = input()
    common = Counter(a) & Counter(b)
    for item in common.keys():
        a = a.replace(item, '', common.get(item))
        b = b.replace(item, '', common.get(item))
    solution.append(len(a) + len(b))

for item in solution:
    print(item)