#include <stdio.h>

int main( )

{
  
  int linha, coluna;
  
  printf("\n");
  coluna = 1;
  while (coluna < 8)
  {
    printf( "\t" );
    linha = 1;
    while (linha < coluna)
    {
      printf( "*" );
      linha += 1;
    }
    printf( "\n" );
    coluna += 1;
  }

    return 0;
}