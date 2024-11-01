#!/usr/bin/python3

import math

def dist_points(x1, y1, x2, y2):
    return math.sqrt((x1-x2)**2 + (y1-y2)**2)

def solve_case():
    x1, y1, r1, x2, y2, r2 = [float(x) for x in input().split()]
    common_dist = dist_points(x1, y1, x2, y2)

    tri_len_1_x = (r1*x2 + r2*x1) / (r1 + r2)
    tri_len_1_y = (r1*y2 + r2*y1) / (r1 + r2)

    tri_len_1 = dist_points(x1, y1, tri_len_1_x, tri_len_1_y)
    tri_len_2 = common_dist - tri_len_1

    ang_1 = math.acos(tri_len_1 / r1)
    ang_2 = math.acos(tri_len_2 / r2)

    tri_area_1 = 0.5 * tri_len_1 * r1 * math.sin(ang_1)
    tri_area_2 = 0.5 * tri_len_2 * r2 * math.sin(ang_2)

    sector_1 = 0.5 * r1**2 * ang_1
    sector_2 = 0.5 * r2**2 * ang_2

    intersect_1 = sector_1 - tri_area_1
    intersect_2 = sector_2 - tri_area_2

    intersect = (intersect_1 + intersect_2) * 2

    return intersect

T = int(input())
for t in range(1, T+1):
    print(f"Case {t}: {solve_case():.7f}")
