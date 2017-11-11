ass Solution {
public:
    
    bool cmp(char f, char s) {
        
        if( (f  == '[') && (s == ']')) return true;
        if( (f  == '{') && (s == '}')) return true;
        if( (f  == '(') && (s == ')')) return true;
                           
        return false;
        
    }
    
    bool isValid(string s) {
        size_t sz = s.length();
        if((sz%2) == 1) return false;
        
        vector<char> cv;
        
        cv.push_back(s[0]);
        char c;
        
        for(int i = 1; i < s.length(); i++) {
         
         c = cv.back();
            
         if(cmp(c,s[i]) == true) {
             cv.pop_back();
         }else{
             cv.push_back(s[i]);
         }
        }
        
        if(cv.size() ==  0) return true;
        else return false;
        

    }
};
