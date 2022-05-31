#!/usr/bin/env python3
from collections import deque

N, M = list(map(int, input().split()))

adj_list = [[] for _ in range(N)]
for _ in range(M):
    src, dst = list(map(int, input().split()))
    src = src - 1
    dst = dst - 1
    adj_list[src].append(dst)

total = 0
for n in range(N):
    reachable = 0
    q = deque()
    visited = set()
    q.append(n)
    visited.add(n)
    reachable = 0
    while (len(q) != 0):
        node = q.popleft()
        reachable += 1
        for child in adj_list[node]:
            if (child not in visited):
                visited.add(child)
                q.append(child)
    total += reachable
print(total)
