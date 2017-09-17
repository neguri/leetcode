class Solution {
public:
	bool judgeCircle(string moves) {
		int lr = 0;
		int ud = 0;
		char c = '0';
		for (int i = 0; i < moves.length(); i++) {
			c = moves[i];
			switch(c) {
				case 'U': ud++; break;
				case 'D': ud--; break;
				case 'R': lr++; break;
				case 'L': lr--; break;
				default: break;
			}
		}
		if (ud == 0 && lr == 0) return true;
		else return false;
	}
};
