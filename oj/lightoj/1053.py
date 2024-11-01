#!/usr/bin/python3

def case():
    lst = sorted([int(x) for x in input().split()])
    if lst[0]**2 + lst[1]**2 == lst[2]**2:
        return "yes"
    return "no"

def main():
    T = int(input())
    for t in range(1, T+1):
        print(f"Case {t}: {case()}")

if __name__=="__main__":
    main()
