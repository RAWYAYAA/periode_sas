#include <stdio.h>
 
void main()
{
    float c;
    float f;
 
    printf("enter temperature in fahrenheit: ");
    scanf("%f",&f);
 
    c=(f - 32)*5/9;
    
        if(c < 10){
            printf(" it's very cold. the temperature is %f", c);
        }
        else if( c < 25){
            printf("its cold. the temperature is %f", c);
        }
        else if(c > 25 && c < 35){
            printf("its hot. the temperature is %f", c);
        }
        else{
            printf("its very hot. the temperature is %f", c);
        }
}
