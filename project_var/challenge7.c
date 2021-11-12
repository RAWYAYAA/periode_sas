#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	float m,l,s,d,r ;
	printf("donner les valeurs de a,b \n");
	scanf("%d",&a);
	scanf("%d",&b);
	m=a*b;
	printf("la multiplication de a,b est :%f  \n", m);
	a=a+b;
	printf("l'addition de a,b est : %f \n",l);
	s=a-b;
	printf("la soustraction de a,b est:%f \n",s);
	d=a/b;
	printf("la division de a,b est:%f \n",d);
	r=a%b;
	printf("le quotient de la division de a,b est: %f",r);
	return(0);
	
	
}
