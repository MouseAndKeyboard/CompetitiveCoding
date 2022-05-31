#!/usr/bin/env python3

x, y = list(map(int, input().split()))

if (x == y):
    print(x)
else:
    print(abs(3 - x - y))
