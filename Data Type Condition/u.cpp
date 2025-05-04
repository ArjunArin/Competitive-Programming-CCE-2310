#include <iostream>
using namespace std;

int main() 
{
    double N;
    cin >> N;
    if (N == (int)N)
    {
      cout << "int " << (int)N << endl;
    } 
    else 
    { 
      cout << "float " << (int)N << " " << N - (int)N << endl;
    }

    return 0;
}
