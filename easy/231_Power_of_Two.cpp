class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool isPower = false;
        for(int i = 0 ; i < 32 && 1 << i <= n; i++) {
            if( (1 << i | n ) == 1 << i) {
                isPower = true;
                break;
            }
        }
        return isPower;
    }
};
