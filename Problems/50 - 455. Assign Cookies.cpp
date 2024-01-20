// Author: Abdelrahman Helmy

#define rall(vec) vec.rbegin(), vec.rend()
#define ll long long
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(rall(s)); 
        sort(rall(g));
        ll cur = 0, tot = 0;
        ll n = g.size(), m = s.size();
        for (int i = 0; i < n; i++) {
            if (cur < m && g[i] <= s[cur]) {
                tot++;
                cur++;
            }
        }
        return tot;
    }
};
