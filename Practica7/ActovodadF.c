#include <stdio.h>
int main() {
    // Este programa convierte las calificaciones de sistema numérico a sistema en letras de USA.

    // Ingresar calificación en sistema numérico.
    

    float calificacion = 0.0;
    char letraFinal = 'N';

    // En esta estructura se va a definir el valor de la Letra conforme a la calificación leida, siguiendo el sistema americano de calificación.
    printf("Ingresar la calificación a convertir\n");
    scanf("%f", &calificacion);

    if (calificacion>=90.0) {
        letraFinal = 'A';

    } else if (calificacion<90 && calificacion>=80.0){
        letraFinal = 'B';
    } else if (calificacion<80.0 && calificacion>=70.0){
        letraFinal = 'C';

    } else if (calificacion<70.0 && calificacion>=60.0){
        letraFinal = 'D';

    } else if (calificacion<60.00)
    {
        letraFinal = 'F';

    }




    printf("La letra es %c\n", letraFinal);
    
   return 0;
}