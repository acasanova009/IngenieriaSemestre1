#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 10
int main() {
    // Este programa ejecutra varias acciones por separado.

    int A[MAX];

    time_t t;
    int i = 0;

    srand((unsigned) time(&t));

    for (int i = 0; i <MAX; i++)
    {
        *(A+i)= rand()%100; 
        // printf("%d\n",*(A+i));


    }

    float B[MAX];

    for (int i = 0; i <MAX; i++)
    {
    
        *(B+i)= ((float)rand()/(float)rand());
        printf("%d\n",*(B+i));
    } 
    *(B+4) = 500;
    
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
