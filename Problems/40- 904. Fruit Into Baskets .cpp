// Author: Abdelrahman Helmy

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map < int, int > freq;

        int l = 0, r = 0, max_fruits = 0, n = fruits.size();
        
        while(r < n){
            freq[fruits[r]]++;
            while(freq.size() > 2){
                freq[fruits[l]]--;
                if(freq[fruits[l]] == 0)
                    freq.erase(fruits[l]);
                l++;
            }
            max_fruits = max(max_fruits, r - l + 1);
            r++;
        }

        return max_fruits;
    }
};