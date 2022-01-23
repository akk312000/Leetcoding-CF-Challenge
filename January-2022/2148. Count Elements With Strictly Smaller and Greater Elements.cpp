class Solution {
public:
    int countElements(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[0]<arr[i]&&arr[n-1]>arr[i])
            {
                count++;
            }
        }
        return count;
    }
};