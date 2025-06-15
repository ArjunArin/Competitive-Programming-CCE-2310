//Problem Name   : Searching 
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 19.05.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    bool flag=false;
    for(int j=0;j<n;j++)
    {
        if(x==arr[j])
        {
            flag=true;
            cout<<j<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<-1<<endl;
    }
}   