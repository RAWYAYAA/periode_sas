#include<stdio.h>
#include<stdlib.h>
int main(){
	float xa,xb,ya,yb,xc,yc,xab,yab,xac,yac,res;
	printf("donner la valeur de A");
	scanf("%d%d",&xa,&ya);
	printf("donner la valeur de B");
	scanf("%d%d",&xb,&yb);
	printf("donner la valeur de C");
	scanf("%d%d",&xc,&yc);
	xab=xb-xa;
	yab=yb-ya;
	xac=xc-xa;
	yac=yc-yb;
	res=(xac*yab)-(xab*yac);
	if(res==0)
		printf("c appartient au segment ac");
		else
		printf("c n'appartient pas au segment ac");
		return(0);
		
	
	
	
	
	
	
}
