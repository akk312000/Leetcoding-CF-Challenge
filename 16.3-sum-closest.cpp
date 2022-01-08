/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int diff=INT_MAX;
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sumo=nums[i]+nums[j]+nums[k];
                int difo=abs(sumo-target);
                if(difo<diff){
                    diff=difo;
                    ans=sumo;
                }
                
                if(sumo>target)
                {
                    k--;
                }
                else j++;
            }

        }
        return ans;
    }
};
// @lc code=end

