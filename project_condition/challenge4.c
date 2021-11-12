#include<stdio.h>
#include<math.h>
int main(){
	int a,b,s;
	printf("donner a et b ");
	scanf("%d",&a);
	scanf("%d",&b);
	s=a+b;
	if(a==b)
	printf("les nombres sont identiques %d",s*3);
    else
	printf(	"no match");
	return(0);
}
