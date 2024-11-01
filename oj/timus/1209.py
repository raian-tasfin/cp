#!/usr/bin/python3

one_indices = []
lim = 32
for i in range(1, lim):
    res = (i * i + i) / 2
    one_indices.append(int(res)-i+1)
