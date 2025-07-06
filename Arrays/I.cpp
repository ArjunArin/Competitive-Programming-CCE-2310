//Problem Name   : Smallest Pair 
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 16.06.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
      long long n;
      cin>>n;
      long long a[n+1];
      for(long long i=1; i<=n; i++)
      {
          cin>>a[i];
      }
      long long sum= 10000000;
      for(int i=1;i<=n-1;i++)
      {
          for(int j=i+1;j<=n;j++)
          {
              long long ans= a[i]+a[j]+j-i;
              if(ans<sum)
                sum=ans;
          }
      }
      cout<<sum<<endl;
    }
}
