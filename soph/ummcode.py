import sys

line = sys.stdin.readline()

punctuation = ['?']
words = line.split(' ')
string = ""
pos = 6
ascii_num = 0
ummword = True
for i in range(len(words)):

    for j in range(len(words[i])):
        if(words[i][j] == 'u'):
            ascii_num += 2^pos
            pos -= 1
        elif(words[i][j] == 'm'):
            pos -= 1
        elif(words[i][j] not in punctuation):
            ummword = False
            break
        print(string)
    if ummword:
        string += chr(ascii_num)
sys.stdout.write(string)
