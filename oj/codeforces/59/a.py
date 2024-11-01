#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    word = list(input())
    lowerCnt = 0
    upperCnt = 0
    for ch in word:
        if ch.islower():
            lowerCnt += 1
        else:
            upperCnt += 1
    word = ''.join(word)
    if upperCnt > lowerCnt:
        word = word.upper()
    else:
        word = word.lower()
    print(word)

def main():
    solve()

if __name__=='__main__':
   main()
