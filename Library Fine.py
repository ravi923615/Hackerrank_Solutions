#!/bin/python3

import sys


d1,m1,y1 = input().strip().split(' ')
d1,m1,y1 = [int(d1),int(m1),int(y1)]
d2,m2,y2 = input().strip().split(' ')
d2,m2,y2 = [int(d2),int(m2),int(y2)]

if m1==m2 and y1==y2 and d1>d2:
    fine = (d1-d2)*15;
    print(fine)
if y1==y2 and m1!=m2 and m1>m2:
    fine = (m1-m2)*500;
    print(fine)
if y1!=y2 and y1>y2:
    fine=10000
    print(fine)
if d1==d2 and m1==m2 and y1==y2:
    fine=0
    print(fine)
if y1<y2:
    fine=0
    print(fine)
if m1<m2 and y1==y2:
    fine=0
    print(fine)
if d1<d2 and m1==m2 and y1==y2:
    fine=0
    print(fine)