#include <iostream> 

using namespace std;
 
int main()
{
  int N, A, n = 0, a = 0;  
 
  cin >> N;

  while(N-- > 0)
  { 
    cin >> A;

    if (a >= 1000000) continue;
    
      a = a + A;
      ++n; 
  }

   cout << n << " " << endl;
  
  return 0;
}