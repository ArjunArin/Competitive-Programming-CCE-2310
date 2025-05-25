// Problem Name : Sum of Consecutive Odd Numbers
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 19/05/2025

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin>>t; 
    for(int i = 1; i <= t; i++)
    {
        long long a, b;
        cin >> a >> b;
        long long min_v, max_v;

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

        int sum = 0;
        for(int k = min_v + 1; k <= max_v - 1; k++)
        {
            if(k % 2 != 0)
            {
                sum = sum + k; 
            }
        }
        cout << sum << endl;
    }
}
