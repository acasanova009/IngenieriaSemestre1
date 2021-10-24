#include <stdio.h>
int main() {
    // Este programa calcula el area de un triángulo.
    float base = 0;
    float altura = 0;
   printf("Ingresar la base de un triángulo\n");
   scanf("%f", &base);
   printf("Ingresar la altura de un triángulo\n");
   scanf("%f", &altura);

   printf("La altura del triángulo es %.2f, la base es %.2f, y el area es: %.2f\n", altura, base, base*altura/2);


   return 0;
}