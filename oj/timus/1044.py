#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    lst = [0, 10, 670, 55252, 4816030]
    indx = int(input())
    if indx%2 != 0:
        print(0)
        return
    print(lst[indx//2])

def main():
    solve()

if __name__=='__main__':
   main()
