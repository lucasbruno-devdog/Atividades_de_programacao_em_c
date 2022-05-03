#include <iostream> 

#define MAX 10000

using namespace std;
 
int main()
{
  int fita[MAX], vet_fita[MAX], cor = 0;
  int i, Q, N, n;

  cin >> N;

  for (i = 0; i < N; i++)
    {
      cin >> fita[i];
      if (fita[i] == 0)
      {
        vet_fita[cor] = i;
        cor++;
      }
      
    }

  for (i = 0; i < N; i++) 
  {
      if (fita[i] == -1)
      {
        Q = abs(i - vet_fita[0]);

          for (n = 1; n < cor; n++)
          {
            if (Q > abs(i - vet_fita[n]))
                Q = abs(i - vet_fita[n]); 
            else
              break;     
          }

        if (Q <= 9)
          cout << Q << " ";
        else
          cout << "9 ";   
      }    
  
    else
      cout << "0 ";    
  }

  return 0;
}