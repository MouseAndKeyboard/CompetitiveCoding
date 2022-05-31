#!/usr/bin/env python3

from queue import PriorityQueue

N, M = map(int, input().split())

weights = [[lambda t: 9999999 for _ in range(N)] for _ in range(N)]


pq = PriorityQueue()

for i in range(N):
    weights[i][i] = lambda t: 1

dist = [999999 for _ in range(N)]

for i in range(M):
    A, B, C, D = map(int, input().split())
    A = A - 1
    B = B - 1
    weights[A][B] = lambda t: C + (D // (t + 1))

src = 0
dist[src] = 0
removed = [False for _ in range(N)]
pq.put(dist[src], (src, 0))
target = N - 1
while(len(pq) > 0):
    priority, node = pq.get()
    node_id, time = node
    removed[node] = True
    if node == target:
        # found
        pass
    for
