# Node is defined as:
# class Node:
#     def __init__(self, val):
#         self.val = val
#         self.next = None
def solve(head):
    if head is None or head.next is None:
        return 0
    count = 0
    prev = head
    curr = head.next
    while curr.next is not None:
        if (curr.val > prev.val and curr.val > curr.next.val) or \
           (curr.val < prev.val and curr.val < curr.next.val):
            count += 1
        prev = curr
        curr = curr.next
    return count
