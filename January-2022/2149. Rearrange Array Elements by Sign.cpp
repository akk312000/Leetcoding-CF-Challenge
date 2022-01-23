class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        vector<int>b;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                a.push_back(nums[i]);
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        int ip=0,jp=0;
        for(int j=0;ip<a.size()||jp<b.size();j++)
        {
            if(j%2==0)
            {
                ans.push_back(a[ip]);
                ip++;
                
            }
            else
            {
                ans.push_back(b[jp]);
                jp++;
            }
        }
        return ans;
        
    }
};