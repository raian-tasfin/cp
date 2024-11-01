#!/usr/bin/python3

from math import acos

def case(rad):
    pi = 2 * acos(0)
    return (rad*2)**2 - pi * rad**2

def main():
    T = int(input())
    for t in range(1, T+1):
        rad = float(input())
        print(f"Case {t}: {case(rad):.2f}")

if __name__=='__main__':
    main()
