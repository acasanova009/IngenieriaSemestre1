#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 10
int main() {
    // Este programa ejecutra varias acciones por separado.

// Se declara el primer arreglo con un numero maximo.
    int A[MAX];

    time_t t;
    int i = 0;
// se prepara una funcion para poder tener numeros aleatorios
    srand((unsigned) time(&t));

    for (int i = 0; i <MAX; i++)
    {
        *(A+i)= rand()%100; 
        // printf("Contador %d actual: %d\n", i, *(A+i));


    }
// Se imprime el valor del septimo valor
    printf("Este es el septimo numero de arreglo: %d\n", *(A+6));
    

    float B[MAX];
// Volvemos a ingresar numeros aleatorios para hacer esto dinamico
    for (int i = 0; i <MAX; i++)
    {
    
        *(B+i)= ((float)rand()/(float)rand());
        printf("%d\n",*(B+i));
    } 
// En este area se desgina un valor especifico al valor de 500
    *(B+4) = 500;
    


// Declaramos un arreglo inicial con la especificacion de que sean flotatnes 
    const int newMax = 100;
    float C[newMax];

// Aqui generamos un valor suma  y un valor puntero que apunta a suma.
    float  suma = 0;
    float *sumPointer = &suma;
    for (int i=0;i<newMax;i++)
    {


        *(C+i) =  ((float)rand()/(float)rand());

        // En esta linea le pedimos al computador que acceda al valor contenido en la direccion de suma, que contiene el valor correpondiente de la suma, y le sumanmos el valor correspondientes del arreglo en cuestion.
        *sumPointer += *(C+i);
        
    }
    printf("Suma final: %f\n",*sumPointer);
   return 0;
}

