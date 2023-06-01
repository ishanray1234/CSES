#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b;
    cin>>n;
    
    
    for(int i=1;i<=n-1;i++)
    {
        cin>>b;
        a=a^b^i;
    }
    a=a^n;
    cout<<a;
    return 0;
}
