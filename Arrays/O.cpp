//Problem Name   : Fibonacci 
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 16.06.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long index;
    long long a[51];
    a[1]=0;
    a[2]=1;
    for(int i=3; i<=50;i++)
    {
        a[i]= a[i-1]+ a[i-2];
    }
    cin>> index;
    cout<< a[index]<<endl;
}
