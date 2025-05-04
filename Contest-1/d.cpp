#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    if ((A + B - C == D) || (A + B * C == D) || (A - B + C == D) || 
        (A - B * C == D) || (A * B + C == D) || (A * B - C == D)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}