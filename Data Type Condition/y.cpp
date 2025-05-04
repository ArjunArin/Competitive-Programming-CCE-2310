#include <iostream>
using namespace std;

int main() 
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    A=A % 100;
    B=B % 100;
    C=C % 100;
    D=D % 100;
    
    long long X = (A * B * C * D) % 100;
    
    if (X < 10)
    {
        cout << "0" << X << endl;
    }
    else
    {
        cout << X << endl;
    }

    return 0;
}
