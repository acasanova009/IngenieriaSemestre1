#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include <string.h>


int getNumero(char caracter);
bool charEsSimbolo(char caracter);
bool charEsNumero(char caracter);
int evaluarDatos(int izq, char operacion,int der);

char intToChar (int i);

void concatenarCharToString(char c, char *cadena);

int main()
{
   FILE *archivo;

   char caracteres[50];
   archivo = fopen("calculos.txt", "r+");

   int numeroDeLinea = 0;

   char finalStream[7][50];

   for (size_t i = 0; i < 7; i++)
   {
      for (size_t j = 0; j < 50; j++)
      {
         finalStream[7][50]= ' ';
      }
      
   }
   



   if (archivo != NULL)
   {
      printf("El archivo se abrió correctamenteABA.");
      printf("\nContenido del archivo:\n");


      while (feof(archivo) == 0)
         {   

         int enteroIzq =-1;
         int enteroDer = -1;
         char operacion = ' ';
         int numeroFinal = -1;
         char cadenaPorEscribir[50];
         for (size_t i = 0; i < 50; i++)
            cadenaPorEscribir[i] = 0;
         

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
            
                  if(charEsNumero(currentChar)){
                     // while(charEsNumero(*(caracteres+j)) || charEsNumero(*(caracteres+j+1))){
                        
                     //    printf("%c", currentChar); 
                     //    j++;
                     // }
                     //Sería mejor hacer un analizador sintáctico. Pero por timepo.

                        if (j==0)
                        {
                           enteroIzq = getNumero(currentChar);
                        }
                        if (j==4)
                        {
                           
                           enteroDer = getNumero(currentChar);

                           numeroFinal = evaluarDatos(enteroIzq, operacion, enteroDer);
                           //  printf("Op:%i \n", numeroFinal); 

                            char text[5]; 
                            sprintf(text, "%d", numeroFinal);

                            concatenarCharToString(' ', cadenaPorEscribir);
                            concatenarCharToString(intToChar(enteroIzq), cadenaPorEscribir);
                            concatenarCharToString(' ', cadenaPorEscribir);
                            concatenarCharToString(operacion, cadenaPorEscribir);
                            concatenarCharToString(' ', cadenaPorEscribir);
                            concatenarCharToString(intToChar(enteroDer), cadenaPorEscribir);
                            concatenarCharToString(' ', cadenaPorEscribir);
                            concatenarCharToString('=', cadenaPorEscribir);
                            concatenarCharToString(' ', cadenaPorEscribir);
                            strcat(cadenaPorEscribir, text);
                           

                           for (size_t i = 0; i < 50; i++)
                           {
                              /* code */
                              finalStream[numeroDeLinea][i]=cadenaPorEscribir[i];
                           }
                           
                           

                           // fputs()
                           
                           numeroDeLinea++;
                        }

                        
                        // printf("%c\n", currentChar); 
                  }
                  else if (charEsSimbolo(currentChar)){


                        if (j==2)
                        {
                           operacion = currentChar;
                        }
                        // printf("i:%i \n", j); 
                        // printf("%c\n", currentChar); 
                  }


                  // printf("%c", currentChar); 
               // switch (currentChar)
               // {
               //    case '1':1
               // }

               
               

            }

               
         }

         fclose(archivo);
         archivo = fopen("calculos.txt", "r+");

      // while(!feof(archivo)==EOF)
      numeroDeLinea = 0;
      while (feof(archivo) == 0 )
      {
            
            if(numeroDeLinea<4)
            {
               printf("%s \n",  finalStream[numeroDeLinea]); 
               // fputs(finalStream[numeroDeLinea], archivo);
            }
            numeroDeLinea++;
         
      }
         
         fclose(archivo);
   }

   // archivo = NULL;
   // char escribir[]= "Escribir cadena en archivo mediante fputs.\n tFacultad de Ingeniería.\n";
   // archivo = fopen("puts.txt", "r+");
   
   // if (archivo != NULL)
   // {
   //       printf("El archivo se abrió correctamente.\n");
   //       fputs (escribir, archivo);
   //       fclose(archivo);
   // }
   // else
   // {
   //    printf("Error al abrir el archivo.\n");
   //    printf("El archivo no existe o no se tienen permisos de lectura.\n");
   // }



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
int getNumero(char caracter){
      int numero = 0;

      for(int i=0; i<10; i++ ){
         
         if (caracter == i +'0')
         {
            numero = i;
            break;
         }
      }
      return numero;
}
bool charEsSimbolo(char caracter){
      bool esSimbolo = false;

      switch (caracter)
      {
      case '+':
         esSimbolo =true;
         break;
      case '-':
         esSimbolo =true;
         break;
      case '%':
         esSimbolo =true;
         break;
      case '/':
         esSimbolo =true;
         break;
      case '*':
         esSimbolo =true;
         break;
      
      default:
         esSimbolo =false;
         break;
      }
      return esSimbolo;
}

int evaluarDatos(int izq, char operacion,int der){
      int operacionFinal = -1;

      switch (operacion)
      {
      case '+':
         operacionFinal = izq + der;
         break;
      case '-':
         operacionFinal = izq - der;
         
         break;
      case '%':
         operacionFinal = izq % der;
         
         break;
      case '/':
         operacionFinal = izq / der;
         
         break;
      case '*':
         operacionFinal = izq * der;
         
         break;
      
      default:
         operacionFinal = -1;
         break;
      }
      return operacionFinal; 
}


void concatenarCharToString(char c, char *cadena)
{
    char cadenaTemporal[2];
    cadenaTemporal[0] = c;
    cadenaTemporal[1] = '\0';
    strcat(cadena, cadenaTemporal);
}


char intToChar (int i){
   // char charVal = i +'0';
   return i +'0';
}