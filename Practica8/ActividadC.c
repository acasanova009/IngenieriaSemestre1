#include <stdio.h>
#include <stdbool.h>
int main() {
    printf("Este programa cuenta votos dependiendo del número ingresado 1, 2, 3, 4, 5.\n");

    bool seguirContandoVotos = true;
    int contadorDeVotos = 0;

    int candidatoUno = 0;
    int candidatoDos = 0;
    int candidatoTres = 0;
    int candidatoCuarto = 0;
    int candidatoCinco = 0;
    
    do {
        int voto = -1;

        printf("Ingresar el siguiente voto a cuantificar\n");

        scanf("%d", &voto);
        if (voto == 0)
            break;

        contadorDeVotos ++;
        switch (voto)
        {
        case 1:
            candidatoUno ++;
            break;
        case 2:
           candidatoDos ++;
            break;
        case 3:
            candidatoTres ++;
            break;
        case 4:
            candidatoCuarto ++;
            break;
        case 5:
            candidatoCinco ++;
            break;
        
        default:
            printf("Este numero no es de ningún candidato.\n");
            contadorDeVotos--;
            break;
        }


    } while (true);
    
    printf("Votos totales\n %d\n", contadorDeVotos);

    float porcentaje = (float)candidatoUno/(float)contadorDeVotos*100.0;
    printf("Votos cantidado 1: %d, porcentaje de votos: %2.2f\n", candidatoUno, porcentaje);

    porcentaje = (float)candidatoDos*100.0/(float)contadorDeVotos;
    printf("Votos cantidado 2: %d, porcentaje de votos: %2.2f\n", candidatoDos,porcentaje );

    porcentaje = (float)candidatoTres*100.0/(float)contadorDeVotos;
    printf("Votos cantidado 3: %d, porcentaje de votos: %2.2f\n", candidatoTres,porcentaje );

    porcentaje = (float)candidatoCuarto*100.0/(float)contadorDeVotos;
    printf("Votos cantidado 4: %d, porcentaje de votos: %2.2f\n", candidatoCuarto,porcentaje );


    porcentaje = (float)candidatoCinco*100.0/(float)contadorDeVotos;
    printf("Votos cantidado 5: %d, porcentaje de votos: %2.2f\n", candidatoCinco,porcentaje );


   return 0;
}

