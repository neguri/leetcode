class Solution {
public:
    string reverseString(string s) {
        int len = s.length();
        string r;
        for(int i = 0; i<len;i++) {
          r.append(1,s[len-1-i]);  
        }
        return r;
    }
};
