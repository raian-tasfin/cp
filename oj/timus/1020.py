#!/usr/bin/python3

import math

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

class Point:
    x: float
    y: float

    def __init__(self, lst):
        self.x, self.y = lst[0], lst[1]

    def distance(a, b):
        return math.sqrt((a.x-b.x)**2 + (a.y-b.y)**2)

def solve():
    nailCnt, radius = nextList(float)
    nailCnt = int(nailCnt)
    nailList = []
    for i in range(nailCnt):
        nailList.append(Point(nextList(float)))
    nailList.append(nailList[0])
    totalLen = 0
    for i in range(nailCnt):
        totalLen += Point.distance(nailList[i], nailList[i+1])
    totalLen += 2 * math.pi * radius
    return totalLen

def main():
    print(f"{solve():.2f}")

if __name__=='__main__':
   main()
