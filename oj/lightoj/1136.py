#!/usr/bin/python3

def count_i(i):
    mod = i%3
    if mod == 0:
        return (i//3)*2
    if mod == 2 :
        return count_i(i+1)-1
    return count_i(i-1)

def solve_case():
    l, r = [int(x) for x in input().split()]
    return count_i(r) - count_i(l-1)

def main():
    T = int(input())
    for t in range(1, T+1):
        print(f"Case {t}: {solve_case()}")

main()
