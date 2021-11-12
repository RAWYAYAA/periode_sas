#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,s,m;
	printf("donner la valeur de a,b,c,d");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	s=a+b+c+d;
	printf("la somme de a,b,c,d est :%d\n",s);
	m=s/4;
	printf("la moyenne est:%d\n",m);
	return(0);
}
