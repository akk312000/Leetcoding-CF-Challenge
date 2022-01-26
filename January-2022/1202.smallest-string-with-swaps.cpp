/*
 * @lc app=leetcode id=1202 lang=cpp
 *
 * [1202] Smallest String With Swaps
 */

// @lc code=start
class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
    }
};
// @lc code=end

class Solution {
    int find(vector<int>&ss,int x)
    {
        if(ss[x]==-1)return x;
        return ss[x]=find(ss,ss[x]);
    }
    void _union(vector<int>&ss,int x,int y)
    {
        int xp=find(ss,x);
        int yp=find(ss,y);
        if(xp!=yp)ss[yp]=xp;
    }
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<int>ss;
        for(int i=0;i<s.size();i++)ss.push_back(-1);
        for(int i=0;i<pairs.size();i++)
        {
            int x=find(ss,pairs[i][0]),y=find(ss,pairs[i][1]);
            if(x!=y)_union(ss,x,y);
            
        }
        unordered_map<int,vector<int>>m;
        for(int i=0;i<s.size();i++)
        {
            m[find(ss,i)].push_back(i);
        }
        for(auto x:m)
        {
            string str="";int j=0;
            for(auto i:x.second)
            {
                str+=s[i];
            }
            sort(str.begin(),str.end());
            for(auto i:x.second)
            {
                s[i]=str[j++];
            }
        }
        return s;
    }
};