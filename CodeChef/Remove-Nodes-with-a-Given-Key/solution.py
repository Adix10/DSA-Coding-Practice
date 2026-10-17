# class Node:
#     def __init__(self, val):
#         self.data = val
#         self.next = None


def removeKey(head, key):
    while head and head.data == key:
        head = head.next
    curr = head
    while curr and curr.next:
        if curr.next.data == key:
            curr.next = curr.next.next
        else:
            curr = curr.next
    return head