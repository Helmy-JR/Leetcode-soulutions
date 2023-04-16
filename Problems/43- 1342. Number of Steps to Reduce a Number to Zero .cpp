// Author: Abdelrahman Helmy

class Solution {
public:
    int numberOfSteps(int num) {
        return (num ?__lg(num) : 0)+__builtin_popcount(num);
    }
};