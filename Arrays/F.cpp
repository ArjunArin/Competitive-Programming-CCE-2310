//Problem Name   : Reversing 
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 26.05.25
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=n-1;i>=0;i--)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
