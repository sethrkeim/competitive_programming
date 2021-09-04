import sys

def shiftleft(list):
    for i in range(3):
        if list[i] == list[i+1]:
            list[i+1] *= 2
            list[i] = 0
        elif list[i+1] == 0:
            list[i+1] = list[i]
            list[i] = 0

def shiftright(list):
    for i in range(3, 0, -1):
        if list[i] == list[i-1]:
            list[i-1] = list[i-1]*2
            list[i] = 0
        elif list[i-1] == 0:
            list[i-1] = list[i]
            list[i] = 0
    return list


line = list(map(int, sys.stdin.readline().split()))




# board = []
# board.append(list(map(int, sys.stdin.readline().split())))
# board.append(list(map(int, sys.stdin.readline().split())))
# board.append(list(map(int, sys.stdin.readline().split())))
# board.append(list(map(int, sys.stdin.readline().split())))
#
# direction = sys.stdin.readline()
#
# if direction == 0:
#     for l in board:
#         l = shiftleft(l)
# elif direction == 1:
#     for l in board:
#         l = shiftleft(l)
# elif direction == 2:
#     for l in board:
#         l = shiftright(l)
# else:
#     for l in board:
#         l = shiftleft(l)
#
# print(board)
