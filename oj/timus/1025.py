#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    groupCnt = next(int)
    groupList = sorted(nextList(int))
    halfCnt = (groupCnt+1)//2
    totalMemberCnt = 0
    for memberCnt in groupList[:halfCnt]:
        totalMemberCnt += (memberCnt + 1)//2
    return totalMemberCnt

def main():
    print(solve())

if __name__=='__main__':
   main()
