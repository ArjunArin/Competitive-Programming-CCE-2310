// Problem Name : Shape3
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
    for(long long line=1;line<=n;line++)
    {
        for(long long space=1;space<=(n-line);space++)
        {
           cout<<" ";
        }
        for(long long star=1;star<=((line*2)-1);star++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
    for(long long line=n;line>=1;line--)
     {
        for(long long space=1;space<=(n-line);space++)
        {
           cout<<" ";
        }
        for(long long star=1;star<=((line*2)-1);star++)
        {
            cout<<"*";
        }
    cout<<endl;
     }

}
