#include <iostream> 
#include <cmath>

using namespace std;
 
int main()
{
  int N, i;
  double X;

  cout.precision(4);
  cout.setf(ios::fixed);

  cin >> N;

  for (i = 0; i < N; i++)
  {
    cin >> X;

    cout << sqrt(X) << endl;

  }
  


  return 0;
}