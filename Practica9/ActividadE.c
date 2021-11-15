#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // Este programa ejecutra varias acciones por separado.

    time_t t;
    srand((unsigned) time(&t));

    const int newMax = 100;
    float C[newMax];

    float  suma = 0;
    float *sumPointer = &suma;

    

    for (int i=0;i<newMax;i++)
    {
        *(C+i) =  ((float)rand()/(float)rand());
        *sumPointer += *(C+i);
        // printf("%f\n",*sumPointer);
    }
    printf("Suma final: %f\n",*sumPointer);

    

   return 0;
}

