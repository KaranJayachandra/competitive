bricks = int(input())

i = 1
while bricks > 0:
    bricks = bricks - i
    last = "Patlu"
    if bricks < 0:
        break
    bricks = bricks - (2*i)
    last = "Motu"
    if bricks < 0:
        break
    i = i + 1

print(last)