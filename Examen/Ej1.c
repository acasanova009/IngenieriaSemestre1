#include <stdio.h>
int main() {
    //Se van a ralizar analicis de datos con los pesos de los alumnos ingresados de una escuela.
    int tamanoMuestraDeAlumnos = 0;

    //Aqui se pide especificar el total de alumnos que se van a tomar la muestra.
    printf("Ingresar el total de alumnos \n");
    scanf("%d", &tamanoMuestraDeAlumnos);
    
   
    //Aqui preparamos las variables y las igualamos a 0, cada variable siguiente contiene los difernetes grupos de edades
    float p_40 = 0;
    float p_40_50 = 0;
    float p50_60= 0;
    float p60=0;

    //En este for, agregaremos estudiantes conforme al tamano de la muestra.
    for (int i = 0; i < tamanoMuestraDeAlumnos; i++)
    {

            //Una estructura basica para ingresar el valor del peso de cada alumno
            printf("Ingresar el siguiente valor de peso \n");
            float pesoAlumnoSiguiente = 0.0f;
            scanf("%f", &pesoAlumnoSiguiente);

            if (pesoAlumnoSiguiente>60 ){
                p60++; 

            }else if (pesoAlumnoSiguiente > 50 ){
                p50_60++; 

            }else if (pesoAlumnoSiguiente >=40){
                p_40_50++;

             } else if (pesoAlumnoSiguiente < 40 ){
                p_40++;
            }
    } 

    //Finalmente tenemos cuidado con la representacion de la infomracion al hacer typecasting de int a float.Y generamos un valor porcentual.
    printf("Porcentaje de alumnos mayores a 60 son: %.2f%\n", p60*100.0f/(float)tamanoMuestraDeAlumnos);
    printf("Porcentaje de alumnos entre 50 y 60 son: %.2f%\n", p50_60*100.0f/(float)tamanoMuestraDeAlumnos);
    printf("Porcentaje de alumnos entre 40 y 50  son: %.2f%\n", p_40_50*100.0f/(float)tamanoMuestraDeAlumnos);
    printf("Porcentaje de alumnos menores a 40 son: %.2f%\n", p_40*100.0f/(float)tamanoMuestraDeAlumnos);

   return 0;
}

