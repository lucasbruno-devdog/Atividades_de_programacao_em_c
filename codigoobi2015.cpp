#include <iostream> 
#include <cmath>

using namespace std;
 
int main()
{
  int N, i, cont = 0;
  int codigo[10000];

  cin >> N;

  for (i = 0; i < N; i++)
  {
    cin >> codigo[i];
  }

  for (i = 0; i+2 < N; i++)
  {
   if (codigo[i] == 1 && codigo[i+1] == 0 && codigo[i+2] == 0 )
   cont++;
  }

  cout << cont <<endl;

  return 0;
}