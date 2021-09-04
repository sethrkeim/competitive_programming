import sys

scores = sys.stdin.readline()

a = 0
b = 0

for i in range(0, len(scores)-1, 2):
    if scores[i] == 'A':
        a += int(scores[i+1])
    else:
        b += int(scores[i+1])

if a > b:
    sys.stdout.write('A\n')
else:
    sys.stdout.write('B\n')
