#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve_case():
    n, m = nextList(int)
    return int(n*m/2)


def main():
    T = next(int)
    for t in range(T):
        print(f"Case {t+1}: {solve_case()}")

if __name__=='__main__':
   main()
