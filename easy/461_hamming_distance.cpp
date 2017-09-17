#include <bitset>

class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = 0;
        std::string x_str = std::bitset<32>(x).to_string();
        std::string y_str = std::bitset<32>(y).to_string();
        
        for(int i = 0; i < x_str.length(); i++) {
            if(x_str[i] != y_str[i]) {
                diff++;
            }
        }
        
     return diff;   
    }
};
