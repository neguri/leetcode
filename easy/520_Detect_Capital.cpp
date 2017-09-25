class Solution {
public:
    bool detectCapitalUse(string word) {
     char prev;
     if(word.length() == 1)
         return true;
        
     if(word[0]>= 'A'&& word[0]<='Z') {

         if(word[1] >= 'A' && word[1] <= 'Z') {
             for(int i = 2; i<word.length(); i++) {
                 if(word[i] >= 'a' && word[i] <='z')
                     return false;
             }             
         } else {
            for(int i = 2; i<word.length(); i++) {
                 if(word[i] >= 'A' && word[i] <='Z')
                     return false;
             }     
             
         }         
     }else {
         for(int i = 1; i<word.length(); i++) {
             if(word[i] >= 'A' && word[i] <='Z')
                 return false;
         }
     }
         return true;
    }
};
