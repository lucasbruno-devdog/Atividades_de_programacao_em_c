#include <iostream>

using namespace std;

int main()
{
  int N, P, Q, res;  
  char C;

  cin >> N;

  cin >> P >> C >> Q;

  if (C == '+')
  {
    res = P + Q;
  }
  
  if (C == '*')
  {
    res = P*Q;
  }
  
  if (res <= N)
  {
      cout << "OK" << endl;
  }
  else
  {
    cout << "OVERFLOW" << endl;
  }
  
    return 0;
}