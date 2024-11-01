#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    st = set(input())
    if len(st) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")

def main():
    solve()

if __name__=='__main__':
   main()
