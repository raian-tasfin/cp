#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    n = next(int)
    while True:
        n+=1
        if len(set(str(n))) == 4:
            break
    print(n)

def main():
    solve()

if __name__=='__main__':
   main()
