#!/usr/bin/python3

def case():
    ADJ_FLOOR = 4
    OPEN_DOOR = 3
    CLOSE_DOOR = 3
    ENTER = 5
    EXIT = 5

    my_pos, lift_pos = [int(x) for x in input().split()]
    res = abs(my_pos - lift_pos) * ADJ_FLOOR
    res += OPEN_DOOR
    res += ENTER
    res += CLOSE_DOOR
    res += abs(my_pos) * ADJ_FLOOR
    res += OPEN_DOOR
    res += EXIT

    return res

def main():
    T = int(input())
    for t in range(1, T+1):
        print(f"Case {t}: {case()}")

if __name__=='__main__':
    main()
