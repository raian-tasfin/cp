#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [int(x) for x in input().split()]

class Vector:
    x: int
    y: int
    def __init__(self, lst):
        self.x, self.y = lst

    def __add__(self, rhs):
        return Vector([self.x+rhs.x, self.y+rhs.y])

    def __sub__(self, rhs):
        return Vector([self.x-rhs.x, self.y-rhs.y])

    def cross(lhs, rhs):
        return lhs.x * rhs.y - rhs.x * lhs.y

    def __repr__(self):
        return f"{self.x} {self.y}"

def solve_case():
    ax, ay, bx, by, cx, cy = nextList(int)
    a = Vector([ax, ay])
    b = Vector([bx, by])
    c = Vector([cx, cy])
    ab = b-a
    bc = c-b
    ac = c-a
    ad = ac-ab

    d = ad + a
    area = abs(Vector.cross(ab, ad))
    return f"{d} {area}"

def main():
    T = next(int)
    for t in range(T):
        print(f"Case {t+1}: {solve_case()}")

if __name__=='__main__':
   main()
