#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	float m,l,s,d,r ;
	printf("donner les valeurs de a,b \n");
	scanf("%d",&a);
	scanf("%d",&b);
	m=a*b;
	printf("la multiplication de a,b est :%f  \n",(float) m);
	l=a+b;
	printf("l'addition de a,b est : %f \n",(float)l);
	s=a-b;
	printf("la soustraction de a,b est:%f \n",(float)s);
	d=a/b;
	printf("la division de a,b est:%f \n",(float)d);
	r=a%b;
	printf("le quotient de la division de a,b est: %f",r);
	return(0);
	
	
}
