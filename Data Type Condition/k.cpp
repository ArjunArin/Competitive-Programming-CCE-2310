#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long min_num = min({A, B, C});
    long long max_num = max({A, B, C});

    cout << min_num << " " << max_num << endl;

    return 0;
}
