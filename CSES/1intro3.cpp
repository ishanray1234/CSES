#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int f=s.size();
    
    int max=1,c=1;
    for(int i=1;i<f;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
            if(c>max)
                max=c;
        }
        else
            c=1;
    }
    
    cout<<max;

    return 0;
}
