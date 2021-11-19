#include<stdio.h>
#include<stdlib.h>

double factoriel(int h){
	double i,f= h;
	  for(i=h-1;i>0;i--)
	 	f = f*i;	
	return f;
}

 int main (){
 	int n;
 	printf("donner un nombre: ");
 	scanf("%d",&n);
 	
 	
 	printf("le factoriel est %d",factoriel(n));
 	return 0;
}

	
	

