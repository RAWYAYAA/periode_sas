#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int n,i;
 bool isPremier(){
 bool	s=false;
 	for(i=2;i<n;i++){
		if(n%i==0){
			s=true;
			break;
		}
		
		}
	return s;
 }
int main(){
		printf("donner un nombre ");
		scanf("%d",&n);
		isPremier();
		if(isPremier()==false)
			printf("p");
		else 
		printf("n");
        	return 0;
		}
			

