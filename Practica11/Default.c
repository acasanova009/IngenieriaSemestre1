#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


void imprimirCuadrado(int lado);
void imprimirCuadradoConCaracter(int lado, char c);
void mayorDeDosNumeros(int num1, int num2);
void coordenadasPolaresToRectangulares(float modulo, float angulo);
void datosDelCirculo(float radio);
int main() {

   //A
   imprimirCuadrado(4);

   //B
   imprimirCuadradoConCaracter(4,'#');

   //C

   mayorDeDosNumeros(5, 8);

   //D
   coordenadasPolaresToRectangulares(5.0, 60.0);

   //E
   datosDelCirculo(15);


      
   return 0;

}
void datosDelCirculo(float radio){
   static float PI = 3.141592653589793;
   printf("\nArea  %0.2f u cuadradas", PI * pow(radio,2) );
   printf("\nCircunferencia %0.2f u", PI * 2 * radio );
   printf("\nDiamentro %0.2f u", radio *2 );


}
void coordenadasPolaresToRectangulares(float modulo, float angulo){
   printf("\n%f", modulo * cosf(angulo) );
   printf("\n%f", modulo * sinf(angulo) );
}


void mayorDeDosNumeros(int num1, int num2){

   int mayor;

   if (num1>num2){
      mayor = num1;
   }   else{
      mayor=num2;

   } 

   printf("\n%d\n", mayor);

}

void imprimirCuadrado(int lado){
   for (int i=0; i<lado; i++){
      for (int j=0; j<lado; j++){
         printf("*");
      }
         printf("\n");

   }
}
void imprimirCuadradoConCaracter(int lado, char c){
   for (int i=0; i<lado; i++){
      for (int j=0; j<lado; j++){
         printf("%c",c);
      }
         printf("\n");

   }
}

