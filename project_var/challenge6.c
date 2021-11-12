#include<stdio.h>
#include<math.h>
int main(){
	float c,f;
	printf("donner la temperature en c");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("voila la temperature en f %f",f);
	return(0);
}
