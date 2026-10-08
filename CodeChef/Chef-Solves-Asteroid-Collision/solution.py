def resolveAsteroidCollisions(a):
    st = []
    for x in a:
        while st and st[-1] > 0 and x < 0:
            if st[-1] < -x:
                st.pop()
            elif st[-1] == -x:
                st.pop()
                x = 0
            else:
                x = 0
        if x:
            st.append(x)
    return st