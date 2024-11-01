#!/usr/bin/python3

from math import acos

def next(type):
    return type(input())

def solve_case():
    r1, r2, h, p = [float(x) for x in input().split()]
    x1 = r1-r2
    x2 = x1*p/h
    r3 = x2+r2

    pi = 2 * acos(0.0)
    return pi*p*(r1**2+r1*r3+r3**2)/3

def main():
    T = next(int)
    for t in range(T):
        print(f"Case {t}: {solve_case():.7f}")

if __name__=='__main__':
   main()
