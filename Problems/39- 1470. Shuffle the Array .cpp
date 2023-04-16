// Author: Abdelrahman Helmy

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector < int > shuffled_vec;

        for(int i = 0, j = n; i < n; i++, j++){
            shuffled_vec.push_back(nums[i]), shuffled_vec.push_back(nums[j]);
        }
        return shuffled_vec;
    }
};