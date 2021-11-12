#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("donner les valeurs de trois chiffres a ");
	scanf("%d",&a);
	b =(a%10)*100;
	a =a/10;
	b =b+(a%10)*10;
	a =a/10;
	b +=a;
	printf("inverser les chiffres :%d ",b);
	return(0);
	
}
