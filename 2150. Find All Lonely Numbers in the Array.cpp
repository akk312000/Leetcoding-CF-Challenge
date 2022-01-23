// 2150. Find All Lonely Numbers in the Array
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
vector<int>ans;
        set<int>sp;
        for(int i=0;i<n;i++)
        {  
            mp[nums[i]]++;
            sp.insert(nums[i]);
           
           
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>1)
            {
             
                continue;
            }
           if(!(sp.count(nums[i]+1)||sp.count(nums[i]-1)))
           {
           
           
                                 ans.push_back(nums[i]);

            }
          
               
        }
      
        
        return ans;
    }
};