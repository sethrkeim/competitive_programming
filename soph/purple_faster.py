from sys import stdin, stdout

n,m = map(int, stdin.readline().split())

currNode = 1
queue = [1]
paths = {1: 0}
used = [1]
for i in range(m):
    line1, line2 = map(int, stdin.readline().split())
    nextNode = line1
    if(nextNode != currNode):
        queue.pop(0)

    queue.append(line2)
    if((line2 not in used) and (line1 in paths)):
        paths[line2] = paths[nextNode] + 1

    if(nextNode == n):
        break

    used.append(line2)
    currNode = nextNode

if(n in paths):
    stdout.write(str(paths[n] - 1))

# from time import perf_counter
# t1_start = perf_counter()
# t1_stop = perf_counter()
# print("Elapsed time:", t1_stop-t1_start)
