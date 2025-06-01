// Problem Name : Replacement
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 26/05/2025

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]<0)
        {
           cout<<" "<<"2";
        }
        else if(arr[i]>0)
        {
            cout<<" "<< "1";
        }
        else
        {
            cout<<" "<<"0";
        }
    }
}