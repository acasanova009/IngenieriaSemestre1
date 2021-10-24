#include <stdio.h>
int main() {
   
   //Este programa contiene datos preestablecidos que son mostrados al usuario.
    char *nombre = "Don Juan Tenorio";
    int edad = 21;
    float estatura = 175;
    char carrera[50] = "Ingeniería en computación";

    // En esta función se imprimen los datos al usuario.
    printf("El nombre del estudiante es %s, su edad %i, estatura %.f[cm], y carrera es %s\n", nombre, edad, estatura, carrera);

    return 0;
}