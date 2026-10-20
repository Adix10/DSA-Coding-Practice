def string_to_number(S):
    num = 0
    for ch in S:
        num = num * 10 + (ord(ch) - ord('0'))
    return num
