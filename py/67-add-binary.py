class Solution:
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """

        sum = int(a) + int(b)
        
        if sum == 0:
            return '0'
        
        s = []
        c = 0

        while ( sum > 0):
            r = sum % 10
            r += c
            c = 0
            if(r == 0):
                s.append('0')
            elif(r == 1):
                s.append('1')
            elif(r == 2):
                s.append('0')
                c = 1
            elif(r == 3):
                s.append('1')
                c = 1
            sum //=10
        if c > 0:
            s.append('1')
        s = s[::-1]
        rtype = ''.join(s)
        return rtype

if __name__ == "__main__":
    assert Solution().addBinary("11","1") == "100"
    assert Solution().addBinary("1010","1011") == "10101"
    assert Solution().addBinary('0','0') == '0' 