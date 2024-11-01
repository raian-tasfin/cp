#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve_case():
    lst = [int(x) for x in input().split()]
    lst.sort()
    if lst[0] + lst[1] != lst[2]:
        print("NO")
    else:
        print("YES")

def print_case(caseNo):
    print("Case {caseNo}: {solve_case()}")

def main():
    T = next(int)
    for t in range(1, T+1):
        solve_case()
        # print_case(t)

if __name__=='__main__':
   main()
