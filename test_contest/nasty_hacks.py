import sys

n = int(sys.stdin.readline())
to_adv = []

for i in range(n):
    r, e, c = map(int, sys.stdin.readline().split())
    if r < (e-c):
        to_adv.append(1)
    elif r == (e-c):
        to_adv.append(0)
    else:
        to_adv.append(-1)

for i in range(n):
    if to_adv[i] == 1:
        sys.stdout.write("advertise\n")
    elif to_adv[i] == 0:
        sys.stdout.write("does not matter\n")
    else:
        sys.stdout.write("do not advertise\n")
