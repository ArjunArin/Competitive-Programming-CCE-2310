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