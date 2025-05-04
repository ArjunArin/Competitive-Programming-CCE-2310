#include <iostream>
using namespace std;
int main()
{
  long long N, M;
  cin >> N >> M;
  long long lastdigitN = N % 10;
  long long lastdigitM = M % 10;
  long long sum = lastdigitN + lastdigitM;
  cout << sum;
  return 0;
}
  