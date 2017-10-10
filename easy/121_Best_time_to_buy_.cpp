class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0; 
		int min_idx = 0;
		int max_idx = 0;

		for(int i = 0; i< prices.size(); i++) {

			if(prices[i] > prices[max_idx]) {
				max_idx = i;
				int delta = prices[max_idx] - prices[min_idx];
				if(delta > max) max = delta;
			}
			if(prices[i] < prices[min_idx]) max_idx = min_idx = i;


	/*
        for(int i = 0; i<prices.size();i++) {
            for(int j = i+1; j<prices.size();j++){
                
                if(prices[j] - prices[i] > max) {
                    max = prices[j] - prices[i];
                }
                
            } 
        }

	*/

        return max;
    }
};
