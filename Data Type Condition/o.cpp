#include <iostream>
using namespace std;

int main() 
{
    long long A, B;
    char S;
    cin >> A >> S >> B;

    switch(S) 
    {
        case '+':
            cout << A + B << endl;
            break;
        case '-':
            cout << A - B << endl;
            break;
        case '*':
            cout << A * B << endl;
            break;
        case '/':
            if(B != 0) 
            {
                cout << A / B << endl;
            } 
            else 
            {
                cout << "Division by zero error!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
