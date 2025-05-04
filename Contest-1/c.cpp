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
