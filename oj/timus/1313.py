#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    n = next(int)
    board = []
    for i in range(n):
        board.append(nextList(int))
    ans = []
    for base in range(0, 2*n-1):
        row = min(base, n-1)
        col = base - row
        while 0<=row<n and 0<=col<n:
            ans.append(board[row][col])
            row -= 1
            col += 1
    print(*ans)

def print_case(caseNo):
    print("Case {caseNo}: {solve_case()}")

def main():
    solve()

if __name__=='__main__':
   main()
