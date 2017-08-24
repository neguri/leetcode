class Solution {
public:
	int findComplement(int num) {
		string s = bitset<32>(num).to_string();
		int pos = 31;
//		cout << "input " << s << endl;
		for (int i = 0; i < 32; i++) {
			if (s[31 - i] != '0') {
				pos = i;
			}
		}
		

		for (int i = 0; i <= pos; i++) {
			if (s[31 - i] == '0')
				s[31 - i] = '1';
			else
				s[31 - i] = '0';
		}
//		cout << "after " << s << endl;
		int ret = 0;
		for (int i = 0; i < pos; i++) {
			//ret += (s[31 - i]-0x30) *( 2 ^ i);
			ret += (s[31 - i] - 0x30) *pow(2,i);

		}

		return ret;
	}
};

