#!/usr/bin/env python3

N = int(input())
times = list(map(int, input().split()))


dp = [[] for _ in range(N)]
dp[0].append(times[0])
for i in range(1, N):
    for possible in dp[i - 1]:
        dp[i].append(possible + times[i])
