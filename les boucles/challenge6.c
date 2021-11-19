#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,n,r,i;
    printf("Donnez un entier:\n");
    scanf("%d",&n);
    printf("Les nombres premiers inferieurs a %d sont:\n",n);    
    for(p=2;p<=n;p++)
    {
        r=1;
        for(i=2;i<p;i++){
            if(p % i == 0){
                r=0;
                break;    
            }
        }
        if(r==1) printf("%d\n",p);
    }
    return 0;
}


