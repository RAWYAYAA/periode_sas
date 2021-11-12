#include<stdio.h>
#include<math.h>
int main(){
	char pal[]="50";
	printf("doner un palindrome pal ");
	scanf("%s",pal);
	if (pal[0]==pal[1]&&pal[3]==pal[4])
	printf("palindrome");
	else
	printf("not");
	return(0);
}
