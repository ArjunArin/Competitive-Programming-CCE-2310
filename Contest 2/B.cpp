//Problem Name   : Drawing 'X’
//Teacher’s Name : Mirza Raquib
//Course Title   : Competitive programming sessional 
//Course Code    : CCE-2310
//Date           : 19.05.25
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

  
    if (N < 3 || N > 49 || N % 2 == 0) 
    {
      cout << "Enter an odd number between 3 and 49." << endl;
      return 1;
    }

    for (int i = 0; i < N; i++) 
    {
      for (int j = 0; j < N; j++) 
      {
         if (i == j && i == N / 2) 
         {
             cout << "X";
         } 
         else if (i == j) 
         {
             cout << "\\";
         } 
         else if (i + j == N - 1) 
         {
             cout << "/";
         } 
         else 
         {
             cout << "*"; 
         }
        }
        cout << endl;
    }
}
