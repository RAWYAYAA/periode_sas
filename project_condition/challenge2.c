#include <stdio.h>
#include<math.h>
int main()
{int n;
   printf("donner un entier:\n");
   scanf("%d", &n);
   if (n % 2 == 0)
      printf("Paire\n");
   else
      printf("Impaire\n");
}
