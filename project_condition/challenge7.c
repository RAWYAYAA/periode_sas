#include<stdio.h>
#include<math.h>
int main(){
	float m;
	printf("donner la moyenne ,m");
	scanf("%f",&m);
	if (m < 10)
		printf("recale");
		else if (m >= 10 && m < 12)
		printf("passable");
		else if(m >=12 && m<14)
		printf("asez bien");
		else if (m >= 14 && m<16)
		printf(" bien");
		else
		printf("tres bien");
		return(0);
	
}
