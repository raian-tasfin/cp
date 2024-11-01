#!/usr/bin/python3

def case():
    input()
    n = int(input())
    lst = [int(x) for x in input().split()]
    res = 0
    for it in lst:
        res += max(it, 0)
    return res

def main():
    T = int(input())
    for t in range(1, T+1):
        res = case()
        print(f"Case {t}: {res}")

if __name__=="__main__":
    main()
