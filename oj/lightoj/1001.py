#!/usr/bin/python3

T = int(input())
for t in range(T):
    n = int(input())
    if n >= 10:
        print(n-10, 10)
    else:
        print(n, 0)
