m = {0: "000", 1: "001", 2: "010", 3: "011", 4: "100", 
    5: "101", 6:"110", 7:"111"}

def solve(octal):
  binary = ""
  for i in range(len(octal)):
    binary += m[int(octal[i])]



  binary = binary[::-1]
  if len(binary) > 19:
    binary = binary[0:19]
  if len(binary) < 19:
    for i in range(19-len(binary)):
      binary += "0"
  
  
  pairs = [[9, 10, 11], [12, 13, 14], [15, 16, 17], [9, 12, 15],
           [10, 13, 16], [11, 14, 17], [9, 13, 17], [11, 13, 15]]

  for pair in pairs:
    if binary[pair[0]] == binary[pair[1]] == binary[pair[2]]:
      if int(binary[pair[0]-9]) and int(binary[pair[1]-9]) and int(binary[pair[2]-9]):
        if int(binary[pair[0]]): 
          return "X wins"
        else:
          return "O wins"
  for i in range(9):
    if not int(binary[i]):
      return "In progress"
  return "Cat's"



n = input()
n = int(n)
for i in range(n):
  c = input()
  print(solve(str(c)))
