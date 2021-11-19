#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int nbr,e,res;
 do{
     printf("Entrez la base \n");
    scanf("%d", &nbr);
    printf("Entrez l'exposant\n");
    scanf("%d", &e);
    while(nbr>0 && e>=0){
        res=pow(nbr,e);
        break;
    }
 }while(nbr<0 && e<=0);
     printf("resultat est %d",res);
 
  return 0;
}

