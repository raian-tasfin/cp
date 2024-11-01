#!/usr/bin/python3

def next(type):
    return type(input())

def solve_case():
    given_name = sorted(list("Timur"))
    name_len = next(int)
    name = sorted(list(next(str)))
    return name_len == 5 and name == given_name

def main():
    T = next(int)
    for t in range(T):
        print("YES" if solve_case() else "NO")

if __name__=='__main__':
    main()
