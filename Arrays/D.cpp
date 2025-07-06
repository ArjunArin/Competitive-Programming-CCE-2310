//Problem Name   : Positions in array 
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
    for (int i=0;i<n;i++)
    {
        if(arr[i]<=10)
            cout<<"A["<<i<<"]"<<" "<<"="<<" "<<arr[i]<<endl;
    }
    return 0;
}
