#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        
        if((((2*a-b)*1.0)/3==(2*a-b)/3) && (2*a-b)/3>=0 && (((2*b-a)*1.0)/3==(2*b-a)/3) && (2*b-a)/3>=0)
            cout<<"YES";
        else    
            cout<<"NO";
        
        
        cout<<endl;
    }
    

    return 0;
}