#include <stdio.h>
int main() {
    

    // bool alternar = true;

    printf("Ingresar 2 numeros,e imrptimir sus tablas de multiplicar\n");
    int x = 0;
    int y = 0;

    printf("Ingresar el primer numero\n");
    scanf("%d", &x);
    printf("Ingresar el segundo numero\n");
    scanf("%d", &y);

    // CAMBIAR POR UN WHILE
    
    for (int i = 1; i <=10; i++){
        printf("\n\nTabla del %d:\n", i);
        printf("Primer dígito por %d, es %d:\n", i, i*x);
        printf("Segundo dígito por %d, es %d:\n", i, i*y);
    }



   return 0;
}

