#include <stdio.h>
#include <stdbool.h>
int main() {

    // Este programa cuenta votos de forma aleatoria y saca el procentaje y el conteo final de votos por cantidadtos
    printf("Este programa cuenta votos dependiendo del número ingresado 1, 2, 3, 4, 5.\n");

    bool seguirContandoVotos = true;
    int contadorDeVotos = 0;

    int candidatoUno = 0;
    int candidatoDos = 0;
    int candidatoTres = 0;
    int candidatoCuarto = 0;
    int candidatoCinco = 0;
    // Se hace el ciclo iniciando con un Do while, ya que es seguro que se empiece a cuantificar por lo menos 1 cantidadto.
    do {
        int voto = -1;

        printf("Ingresar el siguiente voto a cuantificar\n");
    //Este proceso es para distinguir si el usuario a terminado de ingresar votos,
        scanf("%d", &voto);
        if (voto == 0)
            break;
// Se usa el switch para distiguuir el voto al cantidadto al cantidadto correpondiente.
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

    ENETERO / ENTERO = YA NO ES UN ENTERO => 0 eRROR MATEÁTMICO. c NO TE AYUDA
    
    FORZANDO AL COMPILARA CONVETIR DE INT A FLOAT.

    REAL/REAL = REAL SI FUNCIONA.

    // Finalmente se imprime el total de votos de votos
    printf("Votos totales\n %d\n", contadorDeVotos);

    // En estas secciones siguientes; se imprime el procentaje de cada cantidado, y se hacen tranformaciones de tipo int a tipo float.
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

