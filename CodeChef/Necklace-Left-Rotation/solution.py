T = int(input())
for _ in range(T):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    k = k % n
    result = arr[k:] + arr[:k]
    print(*result)