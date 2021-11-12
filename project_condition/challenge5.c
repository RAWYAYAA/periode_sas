#include<stdio.h>
#include<math.h>
int main(){
	int d,x,y,a,b,c,s;
	printf("donner a,b,c");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

    x=-b-sqrt(d)/2*a;
    y=-b+sqrt(d)/2*a;
    s=-b/2*a;
    d=pow(b,2)-4*a*c;
    printf("calculer d \n");
    if (d>0)
	printf("les solutions sont x %f ,y %f \n",x,y);
 else if (d=0)
	printf("la solution est :s \n");
	else
	printf("no solution \n");
	return(0);
	
}
