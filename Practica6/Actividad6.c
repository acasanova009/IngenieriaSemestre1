#include <stdio.h>

int main(int argc, char){
    int a = 9;
    int b=2;
    int c = 5;
    int d = 3;

    if (!a>b || (b<=c))
    {
        printf("Algo pasa");
    }

    if ((c > d)|| (c==a))
    {
        
        printf("Algo pasa");
    }

    if ((b==(c-d)) || (a+b>=(c*d)))
    {
        /* code */
        printf("Algo pasa");
    }
    
    if ((c>5 && c>b) || (a <= d))
    {
        
        printf("Algo pasa");
    }
    
    return 0;
}