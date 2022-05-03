#include <iostream>

#define fila 50000
#define id 100000


using namespace std;

int N, M, i, c;
int id_in, id_out[id+1], n_fila[fila];

int main(void)
{
  

  cin >> N;  

  for (i = 0; i < N; i++)
  {
     cin >> n_fila[i]; 
  }

  for (i = 0; i < id; i++)
  {
     id_out[i]=0;
  }
  
    cin >> M;

  for (i = 0; i < M; i++)
  {
      cin >> id_in;
      id_out[id_in]=1;
  }

    c = 1;
  for (i=0;i<N;i++)
   {
     if (id_out[n_fila[i]] == 1)
          continue;

        if (c == 1)

     {
          cout << n_fila[i] << endl;
          c = 0;
     }

    else
      cout << n_fila[i] << endl;
  }
  
  
    return 0;
}