#include <stdio.h>
int main() {
    // Este programa retorna el valor medio de 3 numeros diferentes ingresados por el usuario.
    int ent1, ent2, ent3;

    ent1 =0;
    ent2 =0;
    ent3 =0;

    // Primero verificamos si son diferentes.
    // De otra manera pedimos que vuelva a intentar ingresar 3 enteros diferentes.

    while (ent1==ent2 || ent2==ent3 || ent3==ent1)
    {
        printf("Ingresar tres enteros diferentes.\n");
        scanf("%d",&ent1);
        printf("Ingresar el segundo.\n");
        scanf("%d",&ent2);
        printf("Ingresar el tercero.\n");
        scanf("%d",&ent3);
    }

    int mayor = ent1;
    int menor = ent3;

    // Mayor
    if (ent2>mayor)
        mayor=ent2;
    if (ent3>mayor)
        mayor=ent2;

    // Menor
    if (ent2<menor)
        menor = ent2;
    if (ent1<menor)
        menor = ent1;

    // Sum total de numeros ingresados
    int sum = ent1+ent2+ent3;
    // Esta resta permite detemirnar el valor del medio.
    int medio = sum - (menor +mayor);
    
     printf("El valor medio es %i\n", medio);

    return 0;
}
// 