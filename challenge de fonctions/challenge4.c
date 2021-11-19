#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int n,i,d,a;
  	int divededby(int n,int a){
	  	d=a/n;
	  	return d;
	}
	bool dividedby() {
		divededby(n,a);
		bool p=false;
		for(i=2; i<d ;i++){
			if(d%i==0){
			p=true;	
			break;
			}
		}
		return p;
	}
  int main(){
  	printf("donner deux nombres a , n \n");
  	scanf("%d %d",&a,&n);
  	divededby(n,a);
  	printf("%d ",d);
  	if (dividedby()==true)
  		printf("n'est pas premier");
  		else
  		printf("premier");
  	return 0;
  	
  }
