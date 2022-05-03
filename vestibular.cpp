#include <iostream>

using namespace std;

int main()
{
  int N, cont = 0, i;  
  char gab[80], rsp[80];

  cin >> N;
  cin >> gab;
  cin >> rsp;


  for (i = 0; i < N; i++)
  {
      if (gab[i] == rsp[i])
        {
            cont++;
        }
  }
        

  cout << cont << endl;
    return 0;
}