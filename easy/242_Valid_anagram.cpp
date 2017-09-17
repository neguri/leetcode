class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length()) return false;
        
        sort(s.begin(),s.end());
//        cout<<s<<endl;
        sort(t.begin(),t.end());
//        cout<<t<<endl;
        
        if(s == t) return true; else return false;
        
    }
};

