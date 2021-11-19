#include <stdio.h>
#include <stdlib.h>
void trifusion(int i,int j,int tab[],int temp[])
{
if(j<=i)
{return;}
	int m=(i+j)/2;
	trifusion(i,m,tab,temp);
	trifusion(m+1,j,tab,temp);
	int pg=i;
	int pd=m+1;
	int c;
	for(c=i;c<=j;c++)
	{
		if(pg==m+1){
			temp[c]=tab[pd];
			pd++;
		}
		else if(pd==j+1){
			temp[c]=tab[pg];
			pg++;
		}
		else if(tab[pg]<tab[pd]){
			temp[c]=tab[pg];
			pg++;
		}
		else {
			temp[c]=tab[pd];
			pd++;
		}
	}
	for(c=i;c<=j;c++){
		
		tab[c]=temp[c];
	}
}
int main(){
	int nbr,i,tab[100],temp[100];
	printf("entrez le nombre delement dans le tableau :");
	scanf("%d",&nbr);
	printf("entrez %d entiers :",nbr);
	for(i=0;i<nbr;i++){
	  scanf("%d",&tab[i]);
  }
	trifusion(0,nbr-1,tab,temp);
	printf("\n tableau trié :");
	for(i=0;i<nbr;i++){
		printf("%4d",tab[i]);
	}
	printf("\n");
	return 0;
}
