#include <stdio.h>
#include <math.h>  
int main()
{
    float h1,h2,m1,m2,s1,s2;
    printf("donner une heure,h1");
    scanf("%f",&h1);
    printf("donner une heure,h2");
    scanf("%f",&h2);
    printf("donner une minute,m1");
    scanf("%f",&m1);
    printf("donner une minute,m2");
    scanf("%f",&m2);
    printf("donner une seconde,s1");
    scanf("%f",&s1);
    printf("donner une seconde ,s2");
    scanf("%f",&s2);
    if(h1==h2 && m1==m2 && s1==s2)
    printf("premier instant");
    else if (h1<h2 && m1<m2 && s1==s2)
    printf("deuxieme instant");
    else 
    printf("il s'agit du mm instant");
    return(0);
    
    
}