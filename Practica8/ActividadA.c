#include <stdio.h>

#define MAX 40
int main() {
    int count = 0;
    while (count <=MAX)
    {
        int innerCount = 0;
        while (innerCount <count){

            printf("*");
            innerCount++;
        }
        printf("\n");
        count += 1;
    }

    count = 0;
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

