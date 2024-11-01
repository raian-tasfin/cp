#!/usr/bin/python3

def solve_case():
    n = int(input())
    if n%2 == 1:
        return f"Impossible"
    two = 1
    while n%2 == 0:
        two *= 2
        n = n // 2
    return f"{n} {two}"

T = int(input())
for t in range(1, T+1):
    print(f"Case {t}: {solve_case()}")
