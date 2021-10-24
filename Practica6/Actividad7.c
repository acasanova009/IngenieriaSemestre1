#include <stdio.h>

int main(int argc, char){

    // El usuario ingresará las unidades en sistema imperial.
    float millas = 0.0;
    float pulgadas = 0.0;
    float pies = 0.0;

    // El resultado se mostrará en metros
    float metros = 0;

    printf("Ingresar millas\n");
    scanf("%f", &millas);

    printf("Ingresar pulgadas\n");
    scanf("%f", &pulgadas);

    printf("Ingresar pies\n");
    scanf("%f", &pies);

    // Aquí se convierten los datos de imperial a metros.
     metros = (millas * 1609.34) + (pies * 0.3048) + (pulgadas * 0.0254);

    // Se  imprimen al usuario los metros totales.
     printf("Los metros totales son %.2f", metros);



    return 0;
}