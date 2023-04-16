// Author: Abdelrahman Helmy

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size())
        return{};
          vector<int> freq_a(26), ans;
        auto freq_b = freq_a;

        for(auto& i : p){
            freq_a[i - 'a']++;
        }

        int l = 0, r = 0;
        while(r - l + 1 != p.size()){
            freq_b[s[r++] - 'a']++;
        }

        for(; r < s.size(); r++){
            freq_b[s[r] - 'a']++;

            if(freq_a == freq_b)
                ans.emplace_back(l);
            
            freq_b[s[l++] - 'a']--;
        }

        return ans;
    }
}; //credit >> ahmed gamal