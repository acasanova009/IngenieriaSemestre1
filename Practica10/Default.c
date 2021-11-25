#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

    //A
    int datos[7][5];
    //El arreglo tiene 7 renglones
    //El arreglo datos tiene 5 columnas.

    datos[1][4]=0;

    //B
    int diagonal[10][10];

    //Lenar datos el arreglo.
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            diagonal[i][j]=1;
        }
    }
    //Lenar con datos la diagonal
     for (int i=0; i<10; i++){
        diagonal[i][i]=5;        
    }



    //Imprimir la diagonal de estos datos 
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%d", diagonal[i][j]);
        }
        printf("\n");
    }
        printf("\n");


    //C
    int N = 5;
    int M = 5;

    time_t t;
    srand((unsigned) time(&t));

    float randoms[N][M];

    
    float suma = 0.0f;
    float *sumPointer = &suma;

    
    //Primero llenamos el arreglos de randoms
    for (int n=0;n<N;n++)
    {
        for (int m=0; m<M; m++)
        {
            randoms[n][m] =  ((float)rand()/(float)rand())*10;
            *sumPointer += randoms[n][m];

        }
    }
    for (int n=0;n<N;n++){
        for (int m=0; m<M; m++) {
            printf("[%.1f]", randoms[n][m]);
        }
        printf("\n");
    }
        printf("\n");


    printf("Suma final: %f\n",*sumPointer);

    //D
    float calificaciones[30][5];

    //random in range from 5-10;

    int lower = 5, upper = 10;

    for (int i = 0; i < 30; i++){
        printf("\nLas calificaciones finales del alumno #: %d son:\n", i);
        float suma = 0.0f;
        float promedio = 0.0f;
        for (int j = 0; j <5; j++){
            calificaciones[i][j] =(rand()%(upper - lower + 1)) + lower;
            printf("Materia %d: Calif: %2.0f.  ", j+1, calificaciones[i][j]);  
            suma += calificaciones[i][j];
            

        }
        promedio = suma/5.0f;
        printf("\nPromedio %0.2f\n",promedio);
        printf("\n");
    }


       

        printf("\n");
    //E
    lower = 1;
    upper = 50; //Camibar a 50
    M = (rand()%(upper - lower + 1)) + lower;
    N = (rand()%(upper - lower + 1)) + lower;

    printf("Cantidad de renglones %d", M);
    printf("Cantidad de columnas %d", N);
        printf("\n");

    int MAT[M][N];

    //Llenamos el arreglo de informacion aleatoria;


    lower = 1;
    upper = 5; 

    for (int i = 0; i <M; i++){
        for (int j = 0; j <N; j++){
        MAT[i][j] =(rand()%(upper - lower + 1)) + lower;
            printf("[%d] ", MAT[i][j]);


        }
        printf("\n"); 
    }

        printf("\n"); 
        printf("\n"); 

    
    int mInvertido[M][N];

    
        int m = 0;
        for (int i = M-1; i >=0; i--)
        {

            for (int j = 0; j < N; j++){
                mInvertido[i][j] = MAT[m][j];
            }


            m++;
        }
        
        printf("\n"); 
        printf("\n"); 

    for (int i = 0; i <M; i++){
            for (int j = 0; j <N; j++){
            
                printf("[%d] ", MAT[i][j]=mInvertido[i][j]);


            }
            printf("\n"); 
        }
       
      
   return 0;

}


