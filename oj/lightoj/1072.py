#!/usr/bin/python3

from math import sin, acos

def case():
    R, n = [float(x) for x in input().split()]
    pi = 2 * acos(0.0)
    theta = pi / n
    r = R * sin(theta) / (1 + sin(theta))
    return r

def main():
    T = int(input())
    for t in range(1, T+1):
        print(f"Case {t}: {case():.7f}")

if __name__=="__main__":
    main()
