def solve(clusters, queries):
  query = max(queries)
  addLeft = []
  addRight = []
  addLeft.append(clusters[0])
  for i in range(1, len(clusters)):
    addLeft.append(clusters[i] + addLeft[i-1])
  rev = clusters[::-1]
  addRight.append(clusters[-1])
  for i in range(1, len(rev)):
    addRight.append(rev[i] + addRight[i-1])
  addRight = addRight[::-1]


  s = set() 
  for i in range(len(clusters)):
    s.add(addLeft[i])
    s.add(addRight[i])

  for i in range(len(clusters)):
    for j in range(len(clusters)-1, i, -1):
      s.add(addLeft[i] + addRight[j])
      if(addLeft[i] + addRight[i] > query):
        j = i 
    if addLeft[i] > query: 
      i = len(clusters)


  for i in queries:
    if i in s:
      print("Yes")
    elif i == 0:
      print("Yes")
    else:
      print("No")



C = input()
Q = int(C.split()[1])
C = int(C.split()[0])
clusters = input().split() 
for i in range(len(clusters)):
  clusters[i] = int(clusters[i])
queries = []
for i in range(Q):
  q = input() 
  queries.append(int(q))

solve(clusters, queries)
