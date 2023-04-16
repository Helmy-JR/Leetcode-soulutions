// Author: Abdelrahman Helmy

class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        map<int,string> mp;
        int row=1; bool dir=true;
        for(auto& i:s){
            // add each character to the current row
            mp[row]+=i;

            // if we are going down and we reach the last row we will change the direction
            if(row==n and dir==true) dir=false;
            // if we are going up and we reach the first row we will change the direction
            else if(row==1 and dir==false) dir=true;

            // if we are going up we will decrement the row
            if(!dir) row--;
            // if we are going down we will increment the row
            else row++;
        }
        // concatenate the rows and return the result
        string ans="";
            for(auto& [x,y]:mp)
                ans+=y;
        
        return ans;
    }
}; 