/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
       return binarySearch(nums,0,n-1,target); 
    }
    int binarySearch(vector<int>&nums,int low,int end,int target)
    {
        while(low<end)
        {
        int mid=low+(end-low)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            if(nums[low]<target)
            {
                end=mid;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[end]<target)
            {
                low=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        }
        return -1;

    }
};
// @lc code=end

