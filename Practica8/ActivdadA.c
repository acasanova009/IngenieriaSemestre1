#include <stdio.h>
#include <string.h>

#define NUMEROSMAX 15
void imprimit(int max, char arreglo[], char espacios[]);

int main() {
    // Este programa imprime asteriscos en forma creciente y decreciente de un triángulo.

    char asteriscs[NUMEROSMAX];
    strcpy(asteriscs, "*");

    char espacios[NUMEROSMAX] = "";
    int count = 0;

       
    printf("\nA\n");     
    do
    {
       printf("%s\n", asteriscs);
        strcat(asteriscs, "*");
        strcat(espacios, " ");

        count ++;
    } while (count<sizeof(asteriscs));



    printf("\nB\n");
    for (int i = sizeof(asteriscs); i > 0; i--)
    {
        // printf("%d\n", i);
        printf("\n");
        for (int j = 0; j<i;j++)
        {
            printf("%c", asteriscs[j]);
        }
    }


    printf("\nC\n");
    for (int i = sizeof(asteriscs); i > 0; i--)
    {
        /* code */

        // printf("%d\n", i);
        imprimit(i, asteriscs, espacios);
        
    }

    printf("\nD\n");
    for (int i = sizeof(asteriscs); i > 0; i--)
    {
        
        
    }
    
    
    
    
    return 0;
}


void imprimit(int max, char arreglo[], char espacios[]){

     printf("\n");
     

        
        for (int i= 0; i< NUMEROSMAX+1-max; i++)
        {
             printf("%c", espacios[i]);
        }

        for (int j = 0; j<max;j++)
        {
            printf("%c", arreglo[j]);
        }

}
