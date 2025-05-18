// Problem Name : Shape1
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long row;
    cin>>row;
    for(long long line=row;line>=1;line--)
    {
        for(long long star=1;star<=line;star++)
        {
           cout<<"*";
        }
    cout<<endl;
    }
}