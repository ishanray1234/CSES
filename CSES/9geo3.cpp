#include<bits/stdc++.h>
using namespace std;
int main(){

        int n;
        cin>>n;

        long x[n],y[n];

        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            int j;
            if(i==(n-1))
                j=0;
            else
                j=i+1;
            
            ans+=((y[i]+y[j])*(x[i]-x[j]));
        }

        ans=abs(ans);
        cout<<ans;


    return 0;
}