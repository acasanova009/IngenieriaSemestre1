    #include <stdio.h>
#include <stdbool.h>

#define MAX 100
int main() {
    

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

