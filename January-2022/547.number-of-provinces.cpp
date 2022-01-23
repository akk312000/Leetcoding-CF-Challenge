/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=n;
        vector<int>root(n);
        vector<int>rank(n);
        for(int i=0;i<n;i++)
        {
            root[i]=i;
            rank[i]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    unionSet(i,j,root,rank,count);
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<root[i]<<" ";
        // }
       return count;


    }
    int find(int x,vector<int>&root)
    {
        if(x==root[x])
        {
            return x;
        }
        return root[x]=find(root[x],root);
    }
    void unionSet(int x,int y,vector<int>&root,vector<int>&rank,int &count)
    {
        int rootX=find(x,root);
        int rootY=find(y,root);
        if(rootX!=rootY)
        {
            if(rank[rootY]>rank[rootX])
            {
                root[rootX]=rootY;
            }
            else if(rank[rootX]>rank[rootY])
            {
                root[rootY]=rootX;
            }
            else{
                root[rootY]=rootX;
                rank[rootX]+=1;
            }
            count--;
        }
    }
    // bool connected(int x,int y,ve)
    // {
    //     return find(x)==find(y);
    // }
};
// @lc code=end

