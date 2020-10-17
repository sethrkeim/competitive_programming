# Python

# input 
s = input()
#type conversion
int(s)
float(s)
#other
split()

# output
print("print this string")
print("Name: %s, Age %d" %(myName, myAge))
# %s - string
# %d - integer
# %f: float
# %4.2f: float but 4 digits before decimal, 2 digits after
# %.2f: float but 2 digits after


# efficient io in python
import sys
n,m = map(int, sys.stdin.readline().split())
sys.stdout.write(str(num))

# deque
import collections
d = collections.deque()
#append at end
d.append(a)
#append at front
d.appendleft(first)
#pop from end
d.pop()
#pop from front
d.popleft()