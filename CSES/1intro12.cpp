#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int alpha[26]={0};
    sort(s.begin(),s.end());
    
    for(int i=0;i<s.size();i++)
    {
        alpha[(int)(s[i]-'A')]++;   
    }
    int e=0,o=0;
    for(int i=0;i<26;i++)
    {
        if(alpha[i]>0)
        {
            if(alpha[i]%2==0)
                e++;
            else
                o++;
        }
    }
    
    //cout<<s<<" "<<e<<" "<<o<<endl;
    
    if(s.size()%2==0)
    {
        if(o>0)
            cout<<"NO SOLUTION";
        else
        {
            for(int i=0;i<26;i++)
            {
                if(alpha[i]>0)
                {
                    for(int j=0;j<alpha[i]/2;j++)
                        cout<<(char)(i+'A');
                }
            }
            for(int i=25;i>=0;i--)
            {
                if(alpha[i]>0)
                {
                    for(int j=0;j<alpha[i]/2;j++)
                        cout<<(char)(i+'A');
                }
            }
        }
    }
    else
    {
        if(o>1)
            cout<<"NO SOLUTION";
        else
        {
            int idx=0;
            for(int i=0;i<26;i++)
            {
                if(alpha[i]%2==1)
                {
                    idx=i;break;
                }
            }
            
            for(int i=0;i<26;i++)
            {
                if(i==idx)
                    continue;
                if(alpha[i]>0)
                {
                    for(int j=0;j<alpha[i]/2;j++)
                        cout<<(char)(i+'A');
                }
            }
            
            for(int i=0;i<alpha[idx];i++)
                cout<<(char)(idx+'A');
                
            for(int i=25;i>=0;i--)
            {
                if(i==idx)
                    continue;
                if(alpha[i]>0)
                {
                    for(int j=0;j<alpha[i]/2;j++)
                        cout<<(char)(i+'A');
                }
            }
        }
    }
    
    

    return 0;
}
