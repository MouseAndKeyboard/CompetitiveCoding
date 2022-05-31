#!/usr/bin/env python3

N = int(input())
A = map(int,input().split())

total = 0
for tree in A:
    if tree > 10:
        total += tree - 10

print(total)
