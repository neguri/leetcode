class Solution {
public:
    int firstUniqChar(string s) {
    map<char,int> m;
    string str= s;
	int _min=str.length();
    
	for(int i = 0; i<str.length(); i++) {
      auto ret = m.insert(map<char,int>::value_type(str[i],i));
	  if(ret.second == false) m.erase(ret.first->first);
	}

    for( auto a : m) {
   //  cout<<a.second<<" "<<_min<<endl; 
     if(a.second < _min) _min = a.second;
	}
    if(_min == str.length()) _min = -1;
	return _min;
    }
};
