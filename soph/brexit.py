import sys
import collections

c, p, x, l = map(int, sys.stdin.readline().split())

partnerships = {}
nump = {}

for i in range(p):
    a, b = map(int, sys.stdin.readline().split())
    if a not in partnerships:
        partnerships[a] = {b}
        nump[a] = [1, 1]
    else:
        partnerships[a].add(b)
        nump[a][0] += 1
        nump[a][1] += 1
    if b not in partnerships:
        partnerships[b] = {a}
        nump[b] = [1, 1]
    else:
        partnerships[b].add(a)
        nump[b][0] += 1
        nump[b][1] += 1

d = collections.deque()
d.append(l)
done = False
out = "stay"

if l == x:
    out = "leave"
else:
    while not done and d:
        curr = d.popleft()
        for key in partnerships[curr]:
            partnerships[key].remove(curr)
            nump[key][1] -= 1
            if nump[key][1]/nump[key][0] <= 0.5:
                if key == x:
                    out = "leave"
                d.append(key)

sys.stdout.write(out)
