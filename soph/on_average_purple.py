import sys

class Queue:
    def __init__(self, start):
        self.head = None
        self.tail = None

    def enqueue(self, node):
        if self.head == None:
            self.head = node
            self.tail = node
        else:
            self.tail.setNext(node)
            self.tail = node

    def dequeue(self):
        ret = self.head
        self.head = self.head.getNext()
        return ret



class Node:
    def __init__(self, val, next):
        self.val = val
        self.next = next

    def setNext(self, next):
        self.next = next

    def setVal(self, value):
        self.val = value

    def getNext(self):
        return self.next

    def getVal(self):
        return self.val


n,m = map(int, sys.stdin.readline().split())

graph = {}
plengths = {}
used = {}

for i in range(m):
    line1, line2 = map(int, sys.stdin.readline().split())
    plengths[line1] = 0
    plengths[line2] = 0
    used[line1] = False
    used[line2] = False
    if(line1 in graph):
        graph[line1].append(line2)
    else:
        graph[line1] = [line2]
    if(line2 in graph):
        graph[line2].append(line1)
    else:
        graph[line2] = [line1]


queue = Queue(Node(1, None))
queue.enqueue(Node(1, None))
found = False

while(queue):

    currNode = queue.dequeue().getVal()

    for node in graph[currNode]:
        if not used[node]:
            queue.enqueue(Node(node, None))
            used[node] = True
            plengths[node] = plengths[currNode] + 1
            if(node == n):
                found = True

    if found:
        break

sys.stdout.write(str(plengths[n] - 1))
