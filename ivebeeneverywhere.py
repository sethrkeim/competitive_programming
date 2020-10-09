numtests = int(input())

uniquelist = []
for i in range(numtests):
    numcities = int(input())
    cities = []
    unique = 0
    for i in range(numcities):
        currcity = input()
        if(currcity not in cities):
            unique += 1
        cities.append(currcity)
    uniquelist.append(unique)

for i in range(len(uniquelist)):
    print(uniquelist[i])
