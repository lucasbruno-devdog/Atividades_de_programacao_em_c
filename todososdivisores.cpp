#include <iostream> 

using namespace std;
 
int main()
{
  int X, i;

  cin >> X;

  for ( i = 1; i <= X; i++)
  {
    if (X%i == 0) 

    cout << i << " ";   
  }
  
  return 0;
}