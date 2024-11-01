#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def nextList(type, delim):
    return [type(x) for x in input().split(delim)]

def solve():
    arr = nextList(int, '+')
    arr.sort()
    print(*arr, sep='+')

def main():
    solve()

if __name__=='__main__':
   main()
