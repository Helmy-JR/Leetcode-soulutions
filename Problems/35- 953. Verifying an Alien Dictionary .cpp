// Author: Abdelrahman Helmy

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // we map the order to the alphabet
        unordered_map<char,char> mp;
        int j = 0;
        for(auto i = 'a'; i <= 'z'; i++, j++) mp[order[j]] = i;

        // we map each letter in the words to the letter it maps to in the alphabet
        for(int i = 0; i < words.size(); i++){
            for(auto&j: words[i])
                j = mp[j];
            
            // we check if the words are sorted or not
            if(i)
                // if they are not sorted then we return false
                if(words[i] < words[i - 1]) return 0;
        }
        return 1;
    }
};