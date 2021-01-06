L = int(input())
n = int(input())
solution = []

for i in range(n):
    w, h = input().split()
    w = int(w)
    h = int(h)
    if w < L or h < L:
        solution.append("UPLOAD ANOTHER")
    else:
        if w != h:
            solution.append("CROP IT")
        else:
            solution.append("ACCEPTED")

for item in solution:
    print(item)