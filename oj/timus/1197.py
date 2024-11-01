#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def doesItCnt(pos):
    for i in range(0,2):
        if not 1 <= pos[i] <= 8:
            return 0
    return 1

checkPos=[]
def makeCheckPos():
    global checkPos
    first = [+2, -2]
    second = [+1, -1]
    for i in first:
        for j in second:
            checkPos.append((i, j))
            checkPos.append((j, i))

def solve_case():
    pos = list(input())
    row, col = ord(pos[0])-ord('a')+1, int(pos[1])
    cnt = 0
    for addPos in checkPos:
        cnt += doesItCnt((row+addPos[0], col+addPos[1]))
    print(cnt)

def print_case(caseNo):
    print("Case {caseNo}: {solve_case()}")

def main():
    makeCheckPos()
    T = next(int)
    for t in range(1, T+1):
        solve_case()
        # print_case(t)

if __name__=='__main__':
   main()
