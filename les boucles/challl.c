#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("donner un nombre: ");
	scanf("%d",&n);
	for (i=2;i<n;i++){
		if (n%2==0){
			printf("n'est pas premier");
			return 0;
		}
		
		
	}
	
	printf("premier");
}
