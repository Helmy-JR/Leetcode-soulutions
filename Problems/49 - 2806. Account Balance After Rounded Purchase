// Author: Abdelrahman Helmy

class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int rem = purchaseAmount % 10;
        int ans = 0;
        if(rem < 5){
          ans =   ((purchaseAmount / 10)) * 10;
        }
        else
         ans = ((purchaseAmount / 10) + 1) * 10;
        if(purchaseAmount % 10 == 0){
            ans = purchaseAmount;
        }

        return 100 - ans;
        
    }
};
