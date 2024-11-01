#!/usr/bin/python3

# steps
# 1. find part of which sqrt sequence.
# 2. find index in sqrt sequence.
# 3. split in co-ordinates
# 4. swap co-ordinates if needed

from math import sqrt

def case(n):
    sqrt_seq = (int(sqrt(n-1))+1)**2
    seq_len = int(sqrt(sqrt_seq))
    mid_num = sqrt_seq - seq_len + 1
    indx = seq_len - abs(mid_num - n)
    col = indx
    row = seq_len

    if n < mid_num:
        col, row = row, col
    if sqrt_seq%2 == 0:
        col, row = row, col

    return f"{col} {row}"

def main():
    T = int(input())
    for t in range(1, T+1):
        n = int(input())
        print(f"Case {t}: {case(n)}")

if __name__=='__main__':
    main()
