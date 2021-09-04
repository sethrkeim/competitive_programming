import sys
import collections

numtests = int(sys.stdin.readline())
lines = []
for j in range(numtests):
    lines.append(sys.stdin.readline())


for j in range(numtests):
    line = lines[j]
    position = 0
    final = collections.deque()
    final.append([])
    empty = True
    for i in range(len(line)):
        if(line[i] == '<'):
            if(position > -1 and not empty and len(final[position]) > 0):
                final[position].pop()
        elif(line[i] == "]"):
            position = len(final)-1
        elif(line[i] == "["):
            position = -1
        elif(line[i] != "\n"):
            if(position == -1):
                final.appendleft([line[i]])
                position = 0
                empty = False
            else:
                final[position].append(line[i])
                empty = False
    for i in final:
        for j in i:
            sys.stdout.write(j)
    sys.stdout.write("\n")
