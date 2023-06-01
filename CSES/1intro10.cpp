#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int f=5,ans=0;
    while(n/f!=0)
    {
        ans+=n/f;
        f*=5;
    }
    cout<<ans;

    

    return 0;
}
