import sys

n = int(sys.stdin.readline())
ans = sys.stdin.readline()

adrian = 'ABC'
bruno = 'BABC'
goran = 'CCAABB'

acount = 0
bcount = 0
gcount = 0
for i in range(n):
    ad = i%len(adrian)
    br = i%len(bruno)
    go = i%len(goran)
    letter = ans[i]
    if adrian[ad] == letter:
        acount += 1
    if bruno[br] == letter:
        bcount += 1
    if goran[go] == letter:
        gcount += 1


if acount >= bcount and acount >= gcount:
    sys.stdout.write(str(acount) + '\n')
    sys.stdout.write("Adrian\n")
    if bcount == acount:
        sys.stdout.write('Bruno\n')
    if gcount == acount:
        sys.stdout.write('Goran\n')
elif bcount >= gcount:
    sys.stdout.write(str(bcount)+'\n')
    sys.stdout.write('Bruno\n')
    if gcount == bcount:
        sys.stdout.write('Goran\n')
else:
    sys.stdout.write(str(gcount)+'\n')
    sys.stdout.write('Goran\n')
