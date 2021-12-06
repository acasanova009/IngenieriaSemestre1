#include<stdio.h>
//Incluimos el math.h para la funcion pow.
#include<math.h>

int main(){


    int a = 20;
    int b = 50;
    int c = a%b;
    printf("C es: %d ", c);
    //Este programa comprueba la expresión de los valores [T/P]^N=T^N/P^N
    //Declaración de las variables
    int T,P,N;

    //Estas variables son el resultado de las operaciones
    int ladoIzquierdo,ladoDerecho;

    printf("Ingresa el primer valor:");
    scanf("%d",&T);

    printf("Ingresa el segundo valor:");
    scanf("%d",&P);

    printf("Ingresa el tercer valor:");
    scanf("%d",&N);

    //Se realizan las operaciones
    ladoIzquierdo=pow(T/P,N);

    ladoDerecho=(pow(T,N))/(pow(P,N));


    //Hacemos una comprobacion basdica para verificar igualdad en resultados.
    if(ladoIzquierdo==ladoDerecho){

        printf("Es igual!");
    }else 
    {

        printf("No es igual!");
    }

	return 0;
}
