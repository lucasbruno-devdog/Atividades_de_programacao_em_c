#include <iostream>

#define MAX 1000

using namespace std;

int main()
{
  int M[MAX][MAX], L[MAX], C[MAX];
  int N, i, j, p, max = -1;

  cin >> N;

  for (i = 0; i < N; i++)
  {
      for (j = 0; j < N; j++)
      {
         cin >> M[i][j];    
      }
      
  }


  for (i = 0; i < N; i++)
  {
      L[i] = C[j] = 0;
      for (j = 0; j < N; j++)
      {
          L[i] += M[i][j];
          C[i] += M[j][i];
      }
      
  }

  for ( i = 0; i < N; i++)
  {
      for (j = 0; j < N; j++)
      {
          p = L[i] + C[j] - 2 * M[i][j];

          if(max < p)
            max = p;
          
      }
      
  }
  
cout << max << endl;

    return 0;
}