// Problem Name : Sequence of Numbers and Sum
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 19/05/2025

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    while(1)
    {
        long long a,b,max_v,min_v;
        cin >> a >> b;
        if(a <= 0 || b <= 0)
            break;
        if(a >= b)
        {
            max_v = a;
            min_v = b;
        }
        else
        {
            max_v = b;
            min_v = a;
        }

        long long sum = 0;
        for(int k = min_v; k <= max_v; k++)
        {
            cout << k << " ";
            sum = sum + k;
        }

        cout << "sum =" << sum << endl;
    }
}
