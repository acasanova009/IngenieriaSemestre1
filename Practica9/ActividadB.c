#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define meses 12
float promedio (float miArray[]);
int mesesSuperavit (float miArray[], float promedio);

int main() {
    // Este programa ejecutra varias acciones por separado.

  

    time_t t;
    

    srand((unsigned) time(&t));


    float cerealAlMes[meses];

    

    for (int i = 0; i < meses; i++)
    {
    
        *(cerealAlMes+i)= ((float)rand()/(float)rand())*(float)1000;
        printf("%f\n",*(cerealAlMes+i));
    } 
    
    float prom = promedio(cerealAlMes);
    printf("Promedio es: %f\n",prom);
    
    printf("Meses arriba del promedio es %d \n", mesesSuperavit(cerealAlMes, prom));
 
    float mejorMes = cerealAlMes[0];
    int mesCorreponditeDelMejorMes = 0;
    for (int i = 0; i <meses; i++){
     if (cerealAlMes[i]>mejorMes) 
     {
            mejorMes = cerealAlMes[i]; 
            mesCorreponditeDelMejorMes = i+1;

     }
    }
    printf("Mes con mayor produccion es %f \n", mejorMes);
    printf("Numero de mes con mayor produccion es %d \n", mesCorreponditeDelMejorMes);
    
   return 0;
}


float promedio (float miArray[]){

    float promedio = 0;
    for (int i = 0; i <meses; i++)
    {
        promedio += miArray[i];
    }


    return  promedio /meses ;
}

int mesesSuperavit (float miArray[], float promedio){

    int contador = 0;
    for (int i = 0; i <meses; i++){
     if (miArray[i]>promedio)
            contador++;
    }
    


    return  contador;
}
