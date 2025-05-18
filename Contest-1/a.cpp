// Problem Name : Winter Sale
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025


#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double  X, P;
    cin >> X >> P;

    double originalPrice = P * 100 / (100 - X);

    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}
