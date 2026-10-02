t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    h = list(map(int, input().split()))
    count = 0
    for x in h:
        if x > k:
            count += 1
    print(count)