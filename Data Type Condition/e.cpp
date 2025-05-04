#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double R;
  cin >> R;
  double Area = 3.141592653 * R * R;
  cout << fixed << setprecision ( 9 );
  cout << Area;
  return 0;
}