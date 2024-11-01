#!/usr/bin/python3

import math

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def pointDistance(ax, ay, bx, by):
    return math.sqrt((ax-bx)**2 + (ay-by)**2)

def solve_case():
    ox, oy, ax, ay, bx, by = nextList(float)
    height = pointDistance(ax, ay, bx, by) / 2
    radius = pointDistance(ox, oy, ax, ay)
    angle = math.asin(height / radius) * 2
    return f"{radius * angle:.4f}"


def print_case(caseNo):
    print(f"Case {caseNo}: {solve_case()}")

def main():
    T = next(int)
    for t in range(1, T+1):
        # solve_case()
        print_case(t)

if __name__=='__main__':
   main()
