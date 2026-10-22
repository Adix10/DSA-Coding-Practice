t = int(input())
while t > 0:
    s = input().strip()
    rem = 0
    for digit in s:
        rem = (rem * 10 + int(digit)) % 20
    print(rem)
    t -= 1