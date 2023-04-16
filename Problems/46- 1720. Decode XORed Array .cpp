// Author: Abdelrahman Helmy

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> orgn ={first};
        for(int i=0 ;i<encoded.size();i++)
            orgn.push_back(orgn.back( )^ encoded[i]);
        
        return orgn;
    }
};