#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    maxN = 99999
    lst = [0] * (maxN+3)
    lim = maxN // 2;
    lst[0] = 0
    lst[1] = 1
    for i in range(1, lim):
        lst[2*i] = lst[i]
        lst[2*i+1] = lst[i] + lst[i+1]
    currentMax = lst[0]
    for i in range(0, len(lst)):
        lst[i] = max(currentMax, lst[i])
        currentMax = lst[i]
    while True:
        num = next(int)
        if num == 0:
            break
        print(lst[num])


def main():
    solve()

if __name__=='__main__':
   main()
