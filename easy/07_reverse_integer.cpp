#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long a = 0;
        long b = (long)x;
        long c = (long)x;

        if(c < 0)
          c*=-1;

        while(c != 0){
          a = a+(c%10);
          c = c/10;
          if(c>0) a*=10;
        }
        if(a > 2147483647 || a < -2147483648)
          return 0;
        return b > 0 ? a : a*-1;
    }
};

int main()
{
  class Solution s;
//  int r = s.reverse(-1123);
//  int r = s.reverse(1534236469);
//  int r = s.reverse(1);
  int r = s.reverse(-2147483648);
  cout<<r<<endl;
  return 0;
}
