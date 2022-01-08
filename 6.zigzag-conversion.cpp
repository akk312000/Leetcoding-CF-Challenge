/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        {
            return s;
        }
        int spo=s.size();
        int n=min(numRows,spo);
        vector<string>sp(n);
       string ans="";
       bool isgoingdown=false;
       int row=0;
       for(auto c:s) 
       {
           sp[row]+=c;
           if(row==0||row==numRows-1)
           {
               isgoingdown=!isgoingdown;
           }
           if(isgoingdown)
           {
               row+=1;
           }
           else{
               row-=1;
           }


       }
       for(int i=0;i<sp.size();i++)
       {
           ans+=sp[i];
       }
    
    return ans;
    }
};
// @lc code=end

