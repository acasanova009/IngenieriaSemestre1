#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>


int main() {

    // short sam[1] = {-32010};
    // unsigned short mine = sam[0];
    // mine = (unsigned short)sin(50)*32767.0 + 32768.0;
    // // mine = 50;
    

    //  printf("%i", mine);
    //  printf("\n");
    //  printf("%hu", mine);
    //  printf("\n");
    //  printf("%hi", mine);
    //  printf("\n");
    //  printf("%hd", mine);
    //  printf("\n");
    //  printf("%hd", mine);

    //  printf("\n\n\n\n");

    short data[10];

                printf("Hola \n\n");          
    for (int i = 0; i < 10; i++)
    {
                data[i] = sinf(i)*32000;
                printf("%hd a\n", data[i]);          
                printf("%hi a\n", data[i]);          
                printf("%hi a\n", data[i]);          
                printf("%i a\n", data[i]);          
                printf("%d a\n", data[i]);          
                printf("%f a\n", data[i]);          
    }
              
   return 0;

}


