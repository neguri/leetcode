class Solution {
public:
    
    unsigned long long convToInt(string str) {
        
        unsigned long long r = str[0] - '0';
        size_t sz = str.length();
        
        for(int i = 1; i < sz; i++)  {
            r *=10;
            r += str[i] - '0';
        }
        cout<<"converted int: "<<r<<endl;
        return r;
    }
    
    string convToStr(unsigned long long i) {
        string r;
        vector<char> v;
        
        while(i > 9 ) {
            v.push_back(i %10 + '0');
            i = i/10;
        }
        v.push_back(i+'0');
        size_t sz = v.size();
        
        for(int j = 0; j < sz; j++ ){
            r.push_back(v[sz-j-1]);    
        }
        
        return r;
    }
    
    string addStrings(string num1, string num2) {
        
        unsigned long long _num1 = convToInt(num1);
        unsigned long long _num2 = convToInt(num2);
        
        unsigned long long _sum = _num1 + _num2;
        
        cout<<"sum: "<<_sum<<endl;
        
        string _ret = convToStr(_sum);
        
        return _ret;
    }
};
