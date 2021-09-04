import sys

s = sys.stdin.readline()
p = sys.stdin.readline()

s = s[0:len(s)-1]
p = p[0:len(p)-1]
if s == p:
    sys.stdout.write('Yes\n')
elif s[0:len(s)-1] == p and s[len(s)-1].isdigit():
    sys.stdout.write('Yes\n')
elif s[1:len(s)] == p and s[0].isdigit():
    sys.stdout.write('Yes\n')
else:
    n = ''
    for i in range(len(p)):
        if p[i].islower():
            n = n + p[i].upper()
        else:
            n = n + p[i].lower()
    if n == s:
        sys.stdout.write('Yes\n')
    else:
        sys.stdout.write('No\n')
