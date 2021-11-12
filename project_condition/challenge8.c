#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	char c;
	printf("donner c ");
	scanf("%c",&c);
	if (c >='a'  && c <='z')
	printf("c'est un n");
	else if (c >='A' &&  c <='Z') 
	printf("c'est un m");
	else 
	printf("ce n'est pas alphabet");
	return(0);
	
}
