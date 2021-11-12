#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int j, m,a;
	printf("donner le jour");
	scanf("%d",&j);
	printf("donner le mois");
	scanf("%d",&m);
	printf("donner l'annee");
	scanf("%d",&a);
	printf("%d-",j);
	switch(m)
	{ 
		case 1:
			printf("janvier");
			break;
		case 2:
			printf("fevrier");
			break;
		case 3:
		   printf("mars");
		  break;
		  case 4:
		    printf("avril");
	     	break;
		case 5:
		    printf("mai");
		    break;
		case 6:
		    printf("juin");
		    break;
		case 7:
		 printf("juillet");
		 break;
		case 8:
		  printf("aout");
		  break;
		case 9:
		  printf("septembre");
		  break;
		case 10:
		  printf("octobre");
		  break;
		case 11:
		  printf("novembre");
		  break;
		case 12:
		   printf("decembre");
		   break;
		default:
			printf("entrer un nbre entre 1 & 12");
		break;	
			
	
	}
	printf("-%d",a);
	return(0);
}
