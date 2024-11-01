#!/usr/bin/python3

def solve(m, n):
    total = m*n
    if m > n:
        m, n = n, m
    if m == 1:
        return total
    if m == 2:
        cnt = int(n/4) * 4
        rem = n % 4
        if rem >= 2:
            cnt += 4
        else:
            cnt += rem * 2
        return cnt

    ans = int( (total + 1) / 2 )
    return ans

T = int(input())
for t in range(1, T+1):
    m, n = [int(x) for x in input().split()]
    print(f"Case {t}: {solve(m, n)}")
