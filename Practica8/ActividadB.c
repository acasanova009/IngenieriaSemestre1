#include <stdio.h>
int main() {
    
    printf("Ingresar 2 numeros, x y para elevar x a la potencia y.\n");
    float x = 0.0f;
    int y = 0;

    printf("Ingresar el primer numero\n");
    scanf("%f", &x);
    printf("Ingresar el segundo numero\n");
    scanf("%d", &y);

    float multipliacion = 1.0f;
    int count = 0;
    while (count <y)
    {
        multipliacion = multipliacion * x; 

        count++;

    
    }
    
    printf("%f", multipliacion);



   return 0;
}

