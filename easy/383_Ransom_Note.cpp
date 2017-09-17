class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
  
        for(int i=0; i<ransomNote.length();i++){
            
            auto r = magazine.find(ransomNote[i],0);
            // cout<<ransomNote[i]<<" "<<r<<endl;
            if( r == -1 ) {
                return false;
            }else{
                magazine.erase(r,1);       
            }
        }
        return true;
    }
};
