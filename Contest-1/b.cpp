// Problem Name : Memo and Momo
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include <iostream>
using namespace std;

int main() 
{
    long long a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0) 
    {
        cout << "Both" << endl;
    } 
    else if (a % k == 0) 
    {
        cout << "Memo" << endl;
    } 
    else if (b % k == 0) 
    {
       cout << "Momo" << endl;
    } 
    else 
    {
        cout << "No One" << endl;
    }

    return 0;
}
