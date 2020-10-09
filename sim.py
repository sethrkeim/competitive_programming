import os
import sys
from atexit import register
from io import BytesIO
sys.stdin = BytesIO(os.read(0, os.fstat(0).st_size))
sys.stdout = BytesIO()
register(lambda: os.write(1, sys.stdout.getvalue()))
input = lambda: sys.stdin.readline().rstrip('\r\n')


numtests = int(input())

all = []
for j in range(numtests):
    line = list(input())
    position = 0
    final = []
    for i in range(len(line)):
        if(line[i] == '<'):
            if(position != 0):
                del final[position-1]
                position -= 1
        elif(line[i] == "]"):
            position = len(final)
        elif(line[i] == "["):
            position = 0
        else:
            if(position >= len(final)):
                final.append(line[i])
            else:
                final.insert(position, line[i])
            position += 1


    all.append("".join(final))

for j in range(numtests):
    print(all[j])
