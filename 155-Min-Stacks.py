class MinStack():

    data = []
    _min = 65535
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.data = []
        _min = 65535
        

    def push(self, x):
        """
        :type x: int
        :rtype: void
        """
        if x < self._min:
            self._min = x
        self.data.append(x)
        

    def pop(self):
        """
        :rtype: void
        """
        self.data.pop()
        

    def top(self):
        """
        :rtype: int
        """
        r = self.data[len(self.data)-1]
        return r
        

    def getMin(self):
        """
        :rtype: int
        """
        #t = self.data.copy()
        t = self.data[:]
        t.sort()
        return t[0]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()

if __name__ == "__main__":
    st = MinStack()
    st.push(-2)
    st.push(0)
    st.push(-3)
    print (st.getMin())
    st.pop()
    print (st.top())
    print (st.getMin())
