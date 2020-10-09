k = int(input())

siglist = []
highlist = [0]

for i in range(k):
    replaced = False
    siglist.append(int(input()))
    for j in range(len(highlist)):
        if(siglist[i] > highlist[j]):
            highlist[j] = siglist[i]
            replaced = True
    if(not replaced):
        highlist.append(siglist[i])

print(len(highlist))
