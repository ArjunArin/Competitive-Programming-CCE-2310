// Problem Name : Ali Baba and Puzzles
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

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