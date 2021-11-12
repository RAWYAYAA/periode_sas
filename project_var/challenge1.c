#include<stdio.h>
int main () {
	int age, Numero;
	char nom[]="0";
	char prenom[]="0";
	char sexe[]="0";
	printf("donner age\n");
	scanf("%d",&age);
	printf("donner Numero\n");
	scanf("%d",&Numero);
	printf("donner nom\n");
	scanf("%s",&nom);
	printf("donner prenom\n");
	scanf("%s",&prenom);
	printf("donner sexe\n");
	scanf("%s",&sexe);
	printf("les informations personelles %d %d  %s %s %s", age , Numero,nom, prenom,sexe);
	return(0);
	
}
