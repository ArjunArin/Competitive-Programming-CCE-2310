// Problem Name : Max
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include <iostream>
using namespace std;

int main()
{
    long long a, n, max=-1;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
      cin>>a;
      if(a>max) 
      {
       max=a; 
      }
    }
    cout<<max<<endl;
}