#include<stdio.h>
#include<stdlib.h> 

   void triFusion(int i,int j,int tab[], int temp[] ){
   	int n;
   	if (j<=i){
   		return ;
	   }
   	int m=i+j/2;
   	triFusion(i,m, tab,temp);
   	triFusion(m+1,j,tab,temp); 
	   int pg=i;
	   int pd=m+1;
	   int c;
	   for(c=i;c<=j;c++){
	   	if (pg==m+1){
	   		temp[c]=tab[pd];
	   		pd++;
		   }
		   else if (pd==j+1){
		   	temp[c]=tab[pg];
		   	pg++;

		   }
		   else if (tab[pg]<tab[pd]){
		   	temp[c]=tab[pg];
		   	pg++;
		   }
		   else{
		   	temp[c]=tab[pd];
		   	pd++;
		   }
		   for(c=i;c<=j;c++){
		   	tab[c]=temp[c];
		   }
		    
		   
	   }
   	
   }
int main (){
	int  n,temp[100],tab[100],i;
	printf("entrez nombre de cases");
	scanf("%d",&n);
	printf("entrez %d entiers",n);
	for(i=0;i<n;i++){
		scanf("%d",&tab[i]);
	}
	triFusion(0,n-1,tab,temp);
	printf("les nombres entiers : \n");
	for(i=0;i<n;i++)
	{
		printf("%3d",tab[i]);
	}
	printf("\n");
	
	return 0;
}
