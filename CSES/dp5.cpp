#include <bits/stdc++.h>

using namespace std;

int helper(int n,vector<int> &dp)
{
    if(n==0)
        return 0;
        
    if(dp[n]!=-1)
        return dp[n];
        
    //dp[i]=INT_MIN;
    
    dp[n]=INT_MAX;
    int t=n;
    
    while(t>0)
    {
        if(t%10!=0)
            dp[n]=min(dp[n],1+helper(n-(t%10),dp));
        t/=10;
    }
    
    return dp[n];
    
}

int main() {
    
    int n;
    cin>>n;
    
    //vector<vector<int>> v(n,vector<int>(3,0));
    
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }*/
    
    vector<int> dp(n+1,-1);
    cout<<helper(n,dp);

    return 0;
}
