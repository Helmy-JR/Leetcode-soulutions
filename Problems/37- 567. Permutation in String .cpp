// Author: Abdelrahman Helmy

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp1, mp2;
        for(auto&i: s1) mp1[i]++;
        int l = 0;

        for(int i=0;i<s2.size();i++){
            mp2[s2[i]]++;
            if(mp1.count(s2[i]) == 0)
                mp2.clear(), l = i + 1;

            if(i - l + 1 == s1.size()){
                if(mp2 == mp1) return 1;
                else mp2[s2[l++]]--;
            }
        }
        return 0;
    }
};// credit abouelsoud