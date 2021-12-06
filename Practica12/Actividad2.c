#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include <string.h>
// void makeOrLoadFile(FILE *a );
// void makeOrLoadFile(FILE * _stream , char * nameOfFile){

//    _stream =fopen("datosEquipo.txt", "r+");
   
//    if(!_stream){
//       _stream=fopen("datosEquipo.txt", "w+");
//       printf("Created from scratch");

//    }
// }
struct Alumno{

   char name[15];
   char apellidoPaterno[15];
   char apellidoMaterno[15];
   float estatura;

};

// struct Alumno alumno initAlumno( char * _name, char * _apellidoPaterno, char * _apellidoMaterno, float estatura){
//    struct Alumno nuevoAlumno;
//    return nuevoAlumno;
   
// }
// Alumno *alumno initAlumno(){
//    struct Alumno nuevoAlumno;
//    return nuevoAlumno;
   
// }

// const char * alumnoToString()
int main()
{

   
   // struct Alumno nuevoAlumno;

   // strcpy(nuevoAlumno.name, "Sam");
   // strcpy(nuevoAlumno.apellidoPaterno, "Wis");
   // strcpy(nuevoAlumno.apellidoMaterno, "SaFogm");
   // nuevoAlumno.estatura = 175.6;
   


   
   FILE *stream;
   stream =fopen("datosEquipo.txt", "r+");
      char lineaDeTexto[50];
      for (size_t i = 0; i < 50; i++)
      {
        lineaDeTexto[i]= ' ';
      }
   
   if(!stream){
      stream=fopen("datosEquipo.txt", "w+");
      printf("Created from scratch");

   }

     if (stream != NULL)
   {
      printf("El archivo se abrió correctamenteABA.");
      printf("\nContenido del archivo:\n");

      

      while (feof(stream) == 0)
         {
              
              printf("%s \n", fgets (lineaDeTexto, 50, stream));
         }

      char textoPorEscribir[100];
      for (size_t i = 0; i < 100; i++)
      {
         textoPorEscribir[i]=0;
      }
      

      printf("Nombre: \n");
      char nombre[15];
      scanf("%s ", nombre);

      strcat(textoPorEscribir, nombre);

      printf("ApellidoPaterno: \n");
      
      scanf("%s ", nombre);

      strcat(textoPorEscribir, nombre);
      printf("Apellido Materno: \n");
      
      scanf("%s ", nombre);

      strcat(textoPorEscribir, nombre);


      

      

      fputs(textoPorEscribir, stream);
      // fprintf(stream, "%s \n", "Escribiresto");


      //       // char *nombre = "Don Juan Tenorio";
               
      //       // int edad = 21;
      //       // float estatura = 175;
      //       // char carrera[50] = "Ingeniería en computación";

      //       // // En esta función se imprimen los datos al usuario.
      //       // printf("El nombre del estudiante es %s, su edad %i, estatura %.f[cm], y carrera es %s\n", nombre, edad, estatura, carrera);


      //       float calificacion;

      //          // En esta estructura se va a definir el valor de la Letra conforme a la calificación leida, siguiendo el sistema americano de calificación.
      //          printf("Ingresar la calificación a convertir\n");
      //          // scanf("%f", &calificacion);


      //     }
   }





   return 0;
}