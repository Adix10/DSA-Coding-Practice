# class Node:
#    def __init__(self, data):
#        self.data = data
#        self.next = None


def getLength(head):
    count = 0
    while head:
        count += 1
        head = head.next
    return count
    