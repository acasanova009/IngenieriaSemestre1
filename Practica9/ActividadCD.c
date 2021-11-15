#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tamVector 60


int main() {
    // Este programa ejecutra varias acciones por separado.

    time_t t;
    srand((unsigned) time(&t));

    int vectores[60];
    int contadorMayorACero = 0;
    int contadorMenorACero = 0;
    int contadorCeros = 0;
    for (int i = 0; i < tamVector; i++)
    {
    
        *(vectores+i)=  rand()%10 -5 ;
        printf("%d\n",*(vectores+i));

        if (vectores[i]>0)
            contadorMayorACero++;
        else if (vectores[i]<0)
            contadorMenorACero++;
        else
        {
            contadorCeros++;
        }
     
        
        
    } 
    
       printf("--------Contadores\n");
        printf("%d\n",contadorMenorACero);
        printf("%d\n",contadorCeros);
        printf("%d\n",contadorMenorACero);

        int suma = 0;
         for (int i = 0; i <tamVector; i++)
        {
            suma += vectores[i];
          }


        int promedio = suma /tamVector;

        printf("El promedio es %d\n",promedio);
        printf("La suma es %d\n", suma);

    
   return 0;
}
