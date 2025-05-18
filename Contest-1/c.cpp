// Problem Name : Next Alphabets
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include <iostream>
using namespace std;

int main() 
{
    char C;
    cin >> C;
    if(C == 'z')
    {
      cout << 'a' << endl;
    }
    else
    {
      cout << char(C + 1) << endl;
    }

    return 0;
}
