#include <iostream> 

using namespace std;
 
int main()
{
  int N, L, C, n = 1, c = 0;  
 
  cin >> N;

  while(n<=N)
  { 
    cin >> L >> C;

    if (C<L)
    {
        c = c + C;
    }
    
    n = n+1;
   
  }

   cout << c << " " << endl;
  
  return 0;
}