#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def solve():
    num = next(int)
    if num == 1:
        return 1
    if num == 0:
        return -1

    res = 0
    tensPower = 1
    for digit in range(9, 1, -1):
        while num % digit == 0:
            res += digit * tensPower
            tensPower *= 10
            num = num // digit
    if num != 1:
        return -1
    return res

def main():
    print(solve())

if __name__=='__main__':
   main()
