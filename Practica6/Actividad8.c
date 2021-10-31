#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char){
    
    int a = 9-5-3;
    printf("El valor de a es %d\n",a);
    
    // La operación  2 div 3 + 3 / 5 es incorrect.
    // Pero al modificarla a lo siguiente, si funciona.
    double b = div(2,3).quot + (3.0/5.0) ;
    printf("El valor de b %f \n",b);
    
    double c =  div(9,2).quot / 5.0;
    printf("El valor de c %f \n",c);

    double d = 7 % 5 % 3;
    printf("El valor de d %f\n",d);

    double e = 7 % (5 % 3);
    printf("El valor de e %f\n",e);

    double f = (7 % 5) % 3;
    printf("El valor de f %f\n",f); 

    double g = (7 % 5 % 3);
    printf("El valor de g %f\n",g);

    double h = (div(12+3,2).quot/(8-(5+1)));
    printf("El valor de h %f\n",h);

    double i = 12 /(2 *3)*sqrt(pow(4,2)) ;
    printf("El valor de i %f\n",i);

    double j = pow(sqrt(4),2);
    printf("El valor de j %f\n",j);

    double k = trunc(815) + round(815);
    printf("El valor de k %f\n",k);

    double m = 7;
    printf("El valor de m %f\n",m);

   

    return 0;
}