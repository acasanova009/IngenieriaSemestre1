#include <stdio.h>
int main() {
    // Este programa tiene la finalidad de hacer una impresión tipo piamidadl de número enteros. 
    // Se utilizan tres funciones for, la primera, la más externa, para llegar a los renglones correpondientes, y finalenete dependiendo al renglón se tiene 2 fors anidsdos para llegar a 4. y refresar a 1.
    for (int i = 0; i <= 7; i++)
    {
        if (i<=4)
        {
            for (int j = 1; j<=i; j++){
                printf("%i   ",j);
            }
        }else
        {   
            for (int j =1 ; j<=8-i; j++){
                printf("%i   ",j);
            }
        }
        printf("\n");
    }
    


   return 0;
}

