    #include <stdio.h>
#include <stdbool.h>

#define MAX 100
int main() {

    // Los siguientes estructuras hacen exactamente lo mismo, la diferencia radica en el tipo de estructura, for o do while, lo único que hace es sumar 10 a num.
    
    // En este código se se
    for (int num = 10; num <= MAX;num+=10)
        printf("%d\n",num);


    int num = 10;
    printf("%d\n",num);

    
    do
    {   
        num+=10;
        printf("%d\n",num);

    } while (num<MAX);
    
}

