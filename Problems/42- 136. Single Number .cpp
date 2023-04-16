// Author: Abdelrahman Helmy

class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int xr=0;
        for(auto& x:arr)
            xr^= x;
        return xr;
    }
};
