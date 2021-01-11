from math import floor

testCases = int(input())
solutionHours = []
solutionMins = []
for case in range(testCases):
    SH, SM, EH, EM = map(int, input().split())
    totalMins = ((EH * 60)+EM)- ((SH * 60)+SM)
    solutionHours.append(floor(totalMins / 60))
    solutionMins.append(totalMins % 60)

for case in range(testCases):
    print(solutionHours[case], solutionMins[case])