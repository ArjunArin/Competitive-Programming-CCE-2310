//Problem Name   : Summation 
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 19.05.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        long long a;
        cin>>a;
        sum=sum+a;
    }
    cout<<abs(sum)<<endl;
}