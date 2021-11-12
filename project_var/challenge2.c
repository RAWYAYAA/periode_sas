#include<stdio.h>
#include<math.h>
int main(){
	float c,f;

	const int y=32,x=1.8;
	printf("donner la valeur de temperature en f ");
	scanf("%f",&f);
	c=(f-y)*5/9;
	printf("voila la temperature en c %f",c);
	return 0;
	
}
