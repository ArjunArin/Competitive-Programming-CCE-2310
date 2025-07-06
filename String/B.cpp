//Problem Name   : Let's use Getline
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional
//Course Code    : CCE-2310
//Date           : 23.06.25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='\\')
            break;
        else
            cout<<s[i];
    }
}
