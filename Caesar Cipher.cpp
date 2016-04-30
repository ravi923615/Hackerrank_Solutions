len = int(input())
str = input()
incr = int(input())
encry = list()
for item in str:
    if item.isalpha():
        if item.islower():
            ch = int(ord(item)) + (incr%26)
            if ch>122 and (ch-incr)<=122:
                ch = (ch%122)+96
        if item.isupper():
            ch = int(ord(item)) + (incr%26)
            if ch>90 and (ch-incr)<=90:
                ch = (ch%90)+64
        if 65<=ch<=90 or 97<=ch<=122:
            encry.append(chr(ch))
    else:
        encry.append(item)
print(''.join(encry))