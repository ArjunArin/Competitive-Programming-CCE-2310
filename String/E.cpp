//Problem Name   : Count
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional
//Course Code    : CCE-2310
//Date           : 23.06.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i]-'0';
    }
    cout<<sum<<endl;

}

