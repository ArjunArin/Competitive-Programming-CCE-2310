// Problem Name : One Prime
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    bool flag=true;
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
}