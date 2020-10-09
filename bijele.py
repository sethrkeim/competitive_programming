correct = [1, 1, 2, 2, 2, 8]


inputted = [0, 0, 0, 0, 0, 0]

line = input().split()
for i in range(6):
    inputted[i] = int(line[i])


outputted = [0, 0, 0, 0, 0, 0]
for i in range(6):
    outputted[i] = (correct[i] - inputted[i])

print('%d %d %d %d %d %d' % (outputted[0], outputted[1],outputted[2],outputted[3],outputted[4],outputted[5]))
