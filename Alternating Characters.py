test = int(input(''))
for a in range(0,test):
    str = input('')
    strlist = list()
    count = 0
    for item in str:
        strlist.append(item)
    same = strlist[0]
    itenr = 0
    for item in strlist:
        itenr = itenr+1
        if item==same and itenr>1:
            count=count+1
        else:
            same=item
    print(count)