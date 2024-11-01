#!/usr/bin/python3

def next(type):
    return type(input())

def nextList(type):
    return [type(x) for x in input().split()]

def distanceToDecelerate(trainV, trainA):
    return trainV**2 / (2 * trainA)

def trainTime(trainV, trainA):
    return trainV / trainA

def solve_case():
    leftTrainV, rightTrainV, birdV, leftTrainA, rightTrainA = nextList(float)
    trainTotalDistance = distanceToDecelerate(leftTrainV, leftTrainA) + distanceToDecelerate(rightTrainV, rightTrainA)
    trainCollisionTime = max(trainTime(leftTrainV, leftTrainA), trainTime(rightTrainV, rightTrainA))
    birdDistance = birdV * trainCollisionTime
    return f"{trainTotalDistance:.7f} {birdDistance:.7f}"


def print_case(caseNo):
    print(f"Case {caseNo}: {solve_case()}")

def main():
    T = next(int)
    for t in range(1, T+1):
        # solve_case()
        print_case(t)

if __name__=='__main__':
   main()
