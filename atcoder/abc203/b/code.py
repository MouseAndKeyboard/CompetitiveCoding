#!/usr/bin/env python3

N, K = map(int, input().split())

total = 0
for floor in range(1, N + 1):
    for room in range(1, K + 1):
        number = floor * 100 + room
        total = number + total

print(total)


# N floors
# K rooms per floor

#
