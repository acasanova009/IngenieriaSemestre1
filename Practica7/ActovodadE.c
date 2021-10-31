#include <stdio.h>
int main() {
    // Este programa convierte las calificaciones de sistema numérico a sistema en letras de USA.

    // Ingresar calificación en sistema numérico.
    

    float gradoDelTriangulo = 0.0;
    char * tipoDeGrado = "Nada";

    // En esta estructura se va a definir el valor de la Letra conforme a la calificación leida, siguiendo el sistema americano de calificación.
    printf("Ingresar el grado a corroborar\n");
    scanf("%f", &gradoDelTriangulo);

    if (gradoDelTriangulo<90.0) {
        tipoDeGrado = "Agudo";

    } else if (gradoDelTriangulo==90.0){
        tipoDeGrado = "Recto";
    } else if  (gradoDelTriangulo>90.0){
      
        tipoDeGrado = "Obtuso";
    }

    printf("El angulo es %s\n", tipoDeGrado);
    
   return 0;
}