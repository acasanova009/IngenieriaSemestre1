#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>



bool charEsNumero(char caracter);
int main()
{
   FILE *archivo;

   char caracteres[50];
   archivo = fopen("calculos.txt", "r");



   if (archivo != NULL)
   {
      printf("El archivo se abrió correctamente.");
      printf("\nContenido del archivo:\n");
      int i = 1;
      while (feof(archivo) == 0)
         {
            fgets (caracteres, 50, archivo);
               // printf("%s fin", caracteres);
            for (int j = 0; j < 50; j++){
               char currentChar  = *(caracteres+j);
               if (currentChar == '\n' || currentChar == '\000'){
                  // Reniciar el valor de la correpondiente operacion;
                  break;
               }
               if (currentChar == ' ')
                  continue;
            
               // while(charEsNumero(currentChar) || charEsNumero(*(caracteres+j+1))){
                  if(charEsNumero(*(caracteres+j))){
                     while(charEsNumero(*(caracteres+j)) || charEsNumero(*(caracteres+j+1))){
                        
                        printf("%c", currentChar); 
                        j++;
                     }
                  }
                  else {

                        printf("%c", currentChar); 
                  }


                  // printf("%c", currentChar); 
               // switch (currentChar)
               // {
               //    case '1':1
               // }

               
               

            }


         }
         fclose(archivo);
   }

   archivo = NULL;
   char escribir[]= "Escribir cadena en archivo mediante fputs.\n tFacultad de Ingeniería.\n";
   archivo = fopen("puts.txt", "r+");
   
   if (archivo != NULL)
   {
         printf("El archivo se abrió correctamente.\n");
         fputs (escribir, archivo);
         fclose(archivo);
   }
   else
   {
      printf("Error al abrir el archivo.\n");
      printf("El archivo no existe o no se tienen permisos de lectura.\n");
   }



   return 0;
}
bool charEsNumero(char caracter){
      bool esNumero = false;

      for(int i=0; i<10; i++ ){
         
         if (caracter == i +'0')
         {
            esNumero = true;
            break;
         }
      }
      return esNumero;
}