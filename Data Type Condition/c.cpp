#include <iostream>
using namespace std;
int main()
{
  long long X, Y;
  cin >> X >> Y;
  if (X <= 1 || X >= 100000 || Y <= 1 || Y >= 100000) 
  {
    return 0; 
  }
  cout << X << " + " << Y << " = " << X + Y << endl;
  cout << X << " * " << Y << " = " << X * Y << endl;
  cout << X << " - " << Y << " = " << X - Y << endl;
  return 0;
}
