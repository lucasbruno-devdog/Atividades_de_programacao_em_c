#include <iostream> 
#include <cmath>

using namespace std;
 
int main()
{
  int N, campo[50], i, quant;

  cin >> N;

  for (i = 0; i < N; i++)
  {
    cin >> campo[i];
  }

  for (i = 0; i < N; i++)
  {
   quant = 0;

   quant += campo[i];

   if (i < N-1)
   {
     quant += campo[i+1];
   }
   
   if (i > 0)
   {
     quant += campo[i-1];
   }
   
   cout << quant << endl;

  }
  

  return 0;
}