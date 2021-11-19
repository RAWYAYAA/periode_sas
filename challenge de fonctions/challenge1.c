#include<stdio.h>
#include<stdlib.h>
int add(int a, int b){
	int s;
	s=a+b;
	return s;	
}
int main(){
	int a,b;
	printf("donner deux nombres a et b \n");
	scanf("%d %d",&a,&b);
	   add(a,b);
	printf("%d",add(a,b));
	return 0;
}

