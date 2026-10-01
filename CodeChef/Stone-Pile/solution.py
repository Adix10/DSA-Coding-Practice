from collections import deque
t = int(input())
for _ in range(t):
    n = int(input())
    a = deque(map(int, input().split()))
    aman = True
    while len(a) > 1:
        if aman:
            a.rotate(-1)
            a.popleft()
        else:
            a.rotate(-2)
            a.popleft()
        aman = not aman
    if aman:
        print(0, a[0])
    else:
        print(1, a[0])