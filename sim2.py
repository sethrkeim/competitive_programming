numtests = int(input())

all = []
for j in range(numtests):
    line = input()
    posw = 0
    final = []
    n = False
    left = line
    write = ""
    while(len(left) > 0):
        delete = left.find('<')
        begin = left.find('[')
        end = left.find(']')
        print(delete)
        if(delete == -1):
            delete = int(float('inf'))
        if(begin == -1):
            begin = int(float('inf'))
        if(end == -1):
            end = int(float('inf'))
        if(delete == -1 and begin == -1 and end == -1):
            write = write + left
        elif(delete <= begin and delete <= end):
            if(delete != 0):
                write = write + left[:delete-1]
                posw += delete-1
            else:
                if(len(write) > 0):
                    write = write[:posw-1] + write[posw:]
            if(len(left) == delete+1):
                break
            else:
                left = left[delete+1:]
        elif(begin <= end):
            write = write[:posw] + left[:begin] + write[posw:]
            if(delete <= end):
                write = left[begin:delete] + write
                position = delete - begin

                if(len(left) == delete+1):
                    break
                else:
                    left = left[delete+1:]
            else:
                write = left[begin:end] + write
                position = end - begin
                if(len(left) == end+1):
                    break
                else:
                    left = left[end+1:]
        else:
            write = write[:posw] + left[:end] + write[posw:]
            posw = len(write) - 1
            if(len(left) == end+1):
                break
            else:
                left = left[end+1:]
        print("Left: " + left)
        print("Write: " + write)



    all.append(write)

for j in range(numtests):
    print(all[j])
