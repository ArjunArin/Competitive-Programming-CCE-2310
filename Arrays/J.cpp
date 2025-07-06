//Problem Name   : Lucky Array 
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 16.06.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long n;
      cin>>n;
      long long a[n];
      for(int j=0;j<n;j++)
      {
        cin>>a[j];  
      }
      long long minn,counter;
      for(long long k=0;k<n;k++)
      {
           if(k==0)
           {
               minn=a[k];
               counter =1;
           }
           else if(a[k]==minn)
           {
               counter++;
           }
           else if(a[k]<minn)
           {
               minn=a[k];
               counter=1;
           }
      }
      if(counter%2!=0)
        cout<<"Lucky"<<endl;
      else
        cout<<"Unlucky"<<endl;
    
}
