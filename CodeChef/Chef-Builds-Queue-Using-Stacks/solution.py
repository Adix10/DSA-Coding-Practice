class QueueUsingStacks:
    def __init__(self):
        self.s1 = []
        self.s2 = []

    def pushElement(self, x):
        self.s1.append(x)

    def popElement(self):
        if not self.s2:
            while self.s1:
                self.s2.append(self.s1.pop())
        return self.s2.pop()

    def peekElement(self):
        if not self.s2:
            while self.s1:
                self.s2.append(self.s1.pop())
        return self.s2[-1]

    def isEmptyResult(self):
        return len(self.s1) == 0 and len(self.s2) == 0