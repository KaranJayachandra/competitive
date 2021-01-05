seatType = ["WS", "WS", "MS", "AS", "AS", "MS",
            "WS", "WS", "MS", "AS", "AS", "MS"]

oppositeOper = [-11, 11,  9,  7,  5,  3,
                  1, -1, -3, -5, -7, -9]

n = int(input())
inputData = []

for i in range(n):
    inputData.append(int(input()))

for seat in inputData:
    print(seat + oppositeOper[seat % 12], " ", seatType[seat % 12])