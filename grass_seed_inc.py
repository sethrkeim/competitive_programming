costpsm = float(input())
numlawns = int(input())

sqmeters = 0
for i in range(numlawns):
    line = input().split()
    sqmeters += float(line[0]) * float(line[1])

print(sqmeters * costpsm)
