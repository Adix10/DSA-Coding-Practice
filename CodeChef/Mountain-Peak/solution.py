def next_higher_peak(heights):
    stack = []
    result = [-1] * len(heights)
    for i in range(len(heights) - 1, -1, -1):
        while stack and stack[-1] <= heights[i]:
            stack.pop()
        if stack:
            result[i] = stack[-1]
        stack.append(heights[i])
    return result
if __name__ == "__main__":
    n = int(input())
    heights = list(map(int, input().split()))

    result = next_higher_peak(heights)

    for height in result:
        print(height, end=" ")