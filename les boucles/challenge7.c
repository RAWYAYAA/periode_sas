#include <stdio.h>

int main()
{
  int n, U0 = 0, U1 = 1, res, i;
 do{
     printf("Entrez le nombre de termes\n");
  scanf("%d", &n);
 }while(n<2);
  
  printf("Les %d premiers termes de la série de Fibonacci sont:\n", n);
 
  for (i = 2; i <=n; i++)
  {
      res = U0 + U1;
      printf("%d\n", res);
      U0 = U1;
      U1 = res;
  }
 
  return 0;
}

