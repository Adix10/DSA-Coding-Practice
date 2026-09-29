t = int(input())
for _ in range(t):
    s = input().strip()
    balance = 0
    valid = 1
    for ch in s:
        if ch == '(':
            balance += 1
        else:
            balance -= 1
        if balance < 0:
            valid = 0
            break
    if balance != 0:
        valid = 0
    print(valid)