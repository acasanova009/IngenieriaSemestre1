#include <stdio.h>
int main() {
    
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

