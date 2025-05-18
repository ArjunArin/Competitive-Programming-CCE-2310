// Problem Name : Even Numbers
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==1)cout<<-1<<endl;
    {
       for(int i=1;i<=n;i++)
    {
        if(i%2==0)cout<<i<<endl;
    } 
    }
    
}
