// Problem Name : Summation
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 19/05/2025

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum = 0;

    for(int i = 1; i <= n; i++) 
    {
        long long a;
        cin >> a;
        sum = sum + a; 
    }

    cout << abs(sum) << endl;
}