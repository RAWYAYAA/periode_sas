#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,ligne,j,k;
	printf("donner une ligne: ");
	scanf("%d",&ligne);
	for(i=1;  i<=ligne;  i++){
		for(j=1;  j<=ligne-i;  j++){
			printf(" ");
		}
		for(k=0;  k!=2*i-1;   k++){
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
   
