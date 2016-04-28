from collections import Counter
t = int(input(''))
lst = list()
if(1<=t<=1000):
    for t in range(0,t):
        str = input('')
        lst.append(str)
    dict = Counter(lst)
max = 0;
for key in dict:
    if(dict[key]>max):
        result = key
        max = dict[key]
print(result)