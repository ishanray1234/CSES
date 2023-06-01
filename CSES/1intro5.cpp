#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==2 || n==3)
        cout<<"NO SOLUTION";
    else
    {
        int t=2;
        
        while(t<=n)
        {
            cout<<t<<" ";
            t+=2;
        }
        t=1;
        while(t<=n)
        {
            cout<<t<<" ";
            t+=2;
        }
    }

    return 0;
}
