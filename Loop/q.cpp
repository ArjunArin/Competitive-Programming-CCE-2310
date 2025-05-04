#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin>>t;
    while(t--) 
    {
        string s;
        cin>>s;
        for(long long i=s.size()-1;i>=0;i--)
        {
            cout<<s[i]-'0'<<" ";
        }
        cout<<endl;
    }
}