class Solution {
public:
    int maximumGood(vector<vector<int>>& statements) {
      int n=statements.size();
        int ans=0;
       for(int num=1<<n;num<1<<(n+1);num++)
       {
           string permutation=bitset<15>(num).to_string().substr(15-n);
           if(check(permutation,statements,n))
           {
               int c=count(begin(permutation),end(permutation),'1');
               ans=max(ans,c);
           }
       }
        return ans;
        
        
    }
    bool check(string&perm,vector<vector<int>>&statements,int n){
        for(int i=0;i<n;i++)
        {
            if(perm[i]=='0')continue;
            for(int j=0;j<n;j++)
            {
                if(statements[i][j]==2)continue;
                if((statements[i][j]==1&&perm[j]=='0')||(statements[i][j]==0&&perm[j]=='1'))return false;
            }
        }
         return true;
    
    }
   
};