#include <iostream> 

using namespace std;
 
int main()
{
  int N, i, A, a = 0;

  cin >> N;

  for ( i = 0; i < N; i++)
  {
    cin >> A;
    if (A == 2) 
    a = 1 - a;  
  }

  cout << N % 2 << " " << endl;
  cout << a << " " << endl;
    
 
  return 0;
}