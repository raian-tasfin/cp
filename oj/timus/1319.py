#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    n = next(int)
    board = [[0]*n for y in range(n)]

    value = 1
    for base in range(0, 2*n-1):
        row = min(base, n-1)
        col = base - row
        while 0<=row<n and 0<=col<n:
            board[col][row] = value;
            value += 1
            row -= 1
            col += 1
    for line in board:
        print(*reversed(line))

def main():
    solve()

if __name__=='__main__':
   main()
