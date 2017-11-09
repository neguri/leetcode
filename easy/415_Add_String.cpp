class Solution {
public:
    
   
    string addStrings(string num1, string num2) {
        
    string num3;
    vector<char> v;


    size_t sz1 = num1.length();
    size_t sz2 = num2.length();
    
    int i = 0;
    int sum;
    int carry = 0;


    while( sz1 > 0 && sz2 > 0) {

       sum = (num1[sz1-1] - '0') + (num2[sz2-1] - '0') + carry;
       if(sum > 9) { carry = 1; sum -=10; }  else carry = 0;

       v.push_back(sum + '0');
       //cout<<sum;
       sz1--;
       sz2--;

    }


    if(sz1 > 0) {

        while( sz1 > 0) {
          sum = num1[sz1-1] -'0' + carry;   
          if(sum > 9) { carry = 1; sum -=10; }  else carry = 0;
            v.push_back(sum + '0');
           // cout<<sum;
          sz1--;
        }
    }else if (sz2 > 0){

        while( sz2 > 0) {
          sum = num2[sz2-1] -'0' + carry;   

          cout<<"debug" <<sz2<<" "<<sum<<endl;
            
          if(sum > 9) { carry = 1; sum -=10; }  else carry = 0;
          v.push_back(sum + '0');
           // cout<<sum;
            sz2--;
        }

    } 
    
    if(carry == 1) v.push_back('1');
    //cout<<sum;

    size_t sz = v.size();
    for(int i = 0; i < sz; i++) {

     num3.push_back(v[sz-1-i]);

    }
        
    return num3;

    }
};

/*
below is big number problem

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

*/
