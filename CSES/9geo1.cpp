#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        
        if((y3-y1)*(x3-x2)>(y3-y2)*(x3-x1))
            cout<<"RIGHT";
        else if((y3-y1)*(x3-x2)<(y3-y2)*(x3-x1))
            cout<<"LEFT";
        else
            cout<<"TOUCH";
        
        
        cout<<endl;
    }

    return 0;
}
