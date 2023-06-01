#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long long int t=n*(n+1)/2;
    if(t%2==1)
        cout<<"NO";
    else
    {
        if(n%2==0)
        {
            cout<<(n/2)<<endl;
            for(int i=1;i<=n/4;i++)
            {
                cout<<i<<" ";
            }
            for(int i=n/4;i>=1;i--)
            {
                cout<<n-i+1<<" ";
            }
            cout<<endl;
            cout<<(n/2)<<endl;
            for(int i=n/4+1;i<=n/2;i++)
            {
                cout<<i<<" ";
            }
            for(int i=n/2;i>=n/4+1;i--)
            {
                cout<<n-i+1<<" ";
            }
        }
        else
        {
            cout<<n-(n/2)<<endl;
            for(int i=1;i<=(n+1)/4;i++)
            {
                cout<<i<<" ";
            }
            for(int i=(n+1)/4;i>=1;i--)
            {
                cout<<n-i<<" ";
            }
            cout<<endl<<(n/2)<<endl;
            for(int i=(n+1)/4+1;i<(n+1)/2;i++)
            {
                cout<<i<<" ";
            }
            for(int i=(n+1)/2-1;i>=(n+1)/4+1;i--)
            {
                cout<<n-i<<" ";
            }
            cout<<n;
        }
    }

    

    return 0;
}
