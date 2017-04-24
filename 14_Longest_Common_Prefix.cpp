class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string _str="";
      int _s_idx = 0;
      if(strs.size() == 0) return nullptr;
      size_t _min_len = strs[0].length();

      //find short string index
      for(size_t i=0; i<strs.size();i++) {
          if(strs[i].length() < _min_len) {
            _s_idx = i;
            _min_len = strs[i].length();
          }
      }
      char c;

      for(size_t i = 0; i<strs[_s_idx].length();i++) {
          c = strs[0][i];
        for(size_t j=1; j<strs.size();j++) {
          if(strs[j][i] == c) c = strs[j][i];
          else
           return _str;
        }
        _str.push_back(c);
      }
      return _str;
    }
};
