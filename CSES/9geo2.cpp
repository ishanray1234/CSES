#include <bits/stdc++.h>
using namespace std;

int o(int x1,int y1,int x2,int y2,int x3,int y3)
{
    long long int f=(y2-y1)*(x3-x1)-(y3-y1)*(x2-x1);
    if(f<0)
        return 1;
    else if(f>0)
        return 2;
    else 
        return 0;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        
        if((o(x1,y1,x2,y2,x3,y3)!=o(x1,y1,x2,y2,x4,y4)) && (o(x3,y3,x4,y4,x1,y1)!=o(x3,y3,x4,y4,x2,y2)))
            cout<<"YES";
        
        else if(o(x1,y1,x2,y2,x3,y3)==0 && o(x1,y1,x2,y2,x4,y4)==0)
        {
            if(max(x1,x2)>=min(x3,x4))
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
        
        cout<<endl;
    }

    return 0;
}
