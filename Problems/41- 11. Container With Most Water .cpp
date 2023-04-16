// Author: Abdelrahman Helmy

class Solution {
public:
    int maxArea(vector<int>& v) {
        int l=0,r=v.size()-1;
        int ans=0;
        while(l<r){
            int curr=(r-l)*min(v[l],v[r]);
            ans=max(ans,curr);
            if(v[l]<=v[r]) l++;
            else r--;
        }
        return ans;
    }
};