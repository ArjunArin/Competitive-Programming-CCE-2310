// Problem Name : Searching
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 19/05/2025

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
        if(arr[j]==x)
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