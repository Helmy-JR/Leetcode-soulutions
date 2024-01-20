// Author: Abdelrahman Helmy

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int mx = -1;
        for(int i = 0 ; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                string s1 = to_string(nums[i]);
                string s2 = to_string(nums[j]);
                char x = *max_element(s1.begin() , s1.end()) , y = *max_element(s2.begin() , s2.end());
                if(x == y){
                    mx = max(mx , nums[i] + nums[j]);
                }
            }
        }
        
        return mx;
        
    }
};
