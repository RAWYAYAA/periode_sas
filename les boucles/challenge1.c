#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,i;
	printf("donner un n ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",n,i,i*n);
		
	}
	return(0);
	
}
