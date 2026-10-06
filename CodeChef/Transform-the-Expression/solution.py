t = int(input())
for _ in range(t):
    s = input()
    st = []
    ans = ""
    for c in s:
        if c.isalpha():
            ans += c
        elif c == '(':
            st.append(c)
        elif c == ')':
            while st[-1] != '(':
                ans += st.pop()
            st.pop()
        else:
            st.append(c)
    while st:
        ans += st.pop()
    print(ans)