// Problem Name : Multiplication table
// Course Title : Competitive Programming Sessional
// Course Code : CCE-2310
// Course Teacher Name : Mirza Raquib
// Date : 24/03/2025

#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin>>n;
  for(int i=1;i<=12;i++)
  {
    cout<< n <<" * "<< i <<" = "<< n * i <<endl;
  }
  return 0;
}