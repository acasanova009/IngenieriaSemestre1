#include <stdio.h>

#define MAX 1000
int main() {

    // A En esta iteración se genera el triangulo noomal de forma creciente
    int count = 0;
    while (count <=MAX)
    {
        int innerCount = 0;
        while (innerCount <count){

            printf("*");
            innerCount++;
        }
        printf("\n");
        count = count +1;
    }
        printf("\n");

    //B En esta iteración se genera el triangulo de forma decreciente
    count =  0;
    while (count <=MAX)
    {
        int innerCount = MAX-count;
        while (innerCount>0){

            printf("*");
            innerCount--;
        }
        printf("\n");
        count += 1;
    }

    // C En este se hacen 2 triángulos el primero es de caracteres en blanco y el segundo de caracteres *
    count = 0;
    while (count <=MAX)
    {
        int whiteCount = 0;
        while (whiteCount <count){

            printf(" ");
            whiteCount++;
        }

    
        int innerCount = MAX-count;
        while (innerCount>0){

            printf("*");
            innerCount--;
        }
        printf("\n");
        count += 1;
    }
    // D En este también se hacen 2 triángulos, el primero de espacios en blanco en forma decreciente, y los asteriscos en forma creciente.
    count = 0;
    while (count <=MAX)
    {

        int whiteCount = MAX-count;
        while (whiteCount>0){

            printf(" ");
            whiteCount--;
        }
        int innerCount = 0;
        while (innerCount <count){

            printf("*");
            innerCount++;
        }
        printf("\n");
        count += 1;
    }
   


   return 0;
}

