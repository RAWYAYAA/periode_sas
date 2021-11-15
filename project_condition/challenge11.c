#include <stdio.h>
#include <math.h>  
int main()
{
    float h1,h2,m1,m2,s1,s2;
    printf("donner t1 (HH:MM:SS) : ");
    scanf("%f:%f:%f",&h1,&m1,&s1);
    printf("donner t2 (HH:MM:SS) : ");
    scanf("%f:%f:%f",&h2,&m2,&s2);
    
    int t1,t2;
    t1 = h1*60*60 + m1*60 + s1;
    t2 = h2*60*60 + m2*60 + s2;
    if(t1 < t2)
    	printf("t1 avant t2");
    else if (t1>t2)
    	printf("t1 apres t2");
    else 
    	printf("ils devient de meme instant");
    	
    return(0);
}


