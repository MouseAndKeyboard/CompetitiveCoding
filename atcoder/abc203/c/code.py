#!/usr/bin/env python3

village = 0
N, K = map(int, input().split())
village += K

friends = []

for n in range(N):
    A, B = map(int, input().split())
    friends.append((A, B))

friends = sorted(friends)

for n in range(N):
    A, B = friends.pop(0)
    if A <= village:
        village += B

print(village)
