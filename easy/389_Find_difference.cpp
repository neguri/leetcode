class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i = 0; i< s.length(); i++) {
            
            cout<<s[i]<<" "<<t[i]<<endl;
            if(s[i] != t[i]) {
                cout<<"diff  "<<t[i]<<endl;
                return t[i];
            }
            
        }
        cout<<"last  "<<t[t.length()-1]<<endl;
        return t[t.length()-1];
    }
};
