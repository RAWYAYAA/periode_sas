#include<stdio.h>
#include<stdlib.h>

void echanger(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;	
	printf("a=%d b=%d \n",a,b);
}
int main (){
	int a,b;
		printf("donner deux nombres a,b \n");
		scanf("%d ",&a);
		scanf("%d",&b);
	echanger(a,b);
		printf("a=%d b=%d \n",a,b);
	return 0;
}
