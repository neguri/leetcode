ass Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
        vector<int> ret;
        int _i_prev = numbers[0];
        int _j_prev = numbers[0];
        
        for(int i=0; i< numbers.size()-1; i++) {

            if(numbers[i] == _i_prev) continue;
            _i_prev = numbers[i];
            
            
            for(int j=i+1; j< numbers.size(); j++){
                if( (numbers[i] + numbers[j]) == target) {
                    ret.push_back(i+1);
                    ret.push_back(j+1);
                    return ret;
                }
            }
        }
        return ret;
    }
};
