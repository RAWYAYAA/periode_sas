#include<stdio.h>
#include<math.h>
int main(){
	int x1,y1,x2,y2;
	float d;
	printf("donner les valeurs de x1,y1,x2,y2");
	scanf("%d",&x1);
	scanf("%d",&y1);
	scanf("%d",&x2);
	scanf("%d",&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("afficher la distance :%f",d);
	
	return 0;
	
}
