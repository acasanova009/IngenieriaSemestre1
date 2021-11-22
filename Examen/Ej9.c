#include <stdio.h>
int main() {
    // Caclular la promocion 3x2 en peliculas.

    //Se guardan las variables necesarias.
    float p1, p2, p3, costoPorEliminar;

    //Se inicializan las variables para evitar errores.
    p1 = 0.0;
    p2 = 0.0;
    p3 = 0.0;
    costoPorEliminar = 0.0;

    //Se ingresan los valores de las peliculas en MXN
   printf("Ingresar el costo 1 1\n");
   scanf("%f", &p1);
   printf("Ingresar el costo 2\n");
   scanf("%f", &p2);
   printf("Ingresar el costo 3\n");
   scanf("%f", &p3);
  
  //Estas estructuras de if else if permiten a la logica del programa identificar el valor mas alto de la perlicula
    costoPorEliminar = p1;

    if (p2>costoPorEliminar)
    {
        costoPorEliminar = p2;
    }
    else if (p3>costoPorEliminar)
    {
        costoPorEliminar = p3;
    }
   //En esta seccion se define por una ecuacion aritmetica como se evalua el costo final
    float pagoFinal = (p1 + p2 + p3) - costoPorEliminar;
    printf("Pago final es: MXN$ %0.2f\n", pagoFinal);
   return 0;
}

