str = input('').lower()
strlist = set()
for item in str:
    if item!=' ':
        strlist.add(ord(item))
count = 0
for item in strlist:
    count = count+1
if(count==26):
    print('pangram')
else:
    print('not pangram')