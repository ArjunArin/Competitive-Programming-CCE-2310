#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long A,B;
  cin >> A >> B;
  cout<<"floor " <<A<<" / "<<B<<" = "<< floor(A*1.00/B)<<endl;
  cout<<"ceil " <<A<<" / "<<B<<" = "<< ceil(A*1.00/B)<<endl;
  cout<<"round " <<A<<" / "<<B<<" = "<< round(A*1.00/B)<<endl;
  
  return 0;
}
