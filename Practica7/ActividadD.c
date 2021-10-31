#include <stdio.h>
int main() {
    // Este programa verifica que si 3 enteros diferentes entre sí están en orden creciente.
    int ent1, ent2, ent3;

    ent1 =0;
    ent2 =0;
    ent3 =0;
    // Primero verificamos si son diferentes, de otra manera pedimos que vuelva a intentar ingresar 3 enteros diferentes.

    while (ent1==ent2 || ent2==ent3 || ent3==ent1)
    {
        printf("Ingresar tres enteros diferentes.\n");
        scanf("%d",&ent1);
        scanf("%d",&ent2);
        scanf("%d",&ent3);
    }

    

    // Ahora, vamos a corroborar que estén en ordren creciente.
    if (ent3>ent2 && ent2>ent1)
    {
        printf("Sí, los numeros ingresados están en ordren creciente.");
    }
    else{
        printf("No estan en orden creciente.");
    }
    
    return 0;
}