#!/usr/bin/python3

from typing import List

def box_colour(row: int, col: int) -> int:
	return 1 if row % 2 == col % 2 else 0


def solve(lst: List[int]) -> int:
	row_1, col_1, row_2, col_2 = lst
	if box_colour(row_1, col_1) != box_colour(row_2, col_2):
		return -1
	if abs(row_1 - row_2) == abs(col_1 - col_2):
		return 1
	return 2


if __name__ == '__main__':
	cases = int(input())
	for caseno in range(1, cases + 1):
		ans = solve([int(x) for x in input().split()])
		print(f"Case {caseno}: {'impossible' if ans == -1 else ans}")
