//Importanción de las bibliotecas basicas
#include "stdlib.h"
#include "stdio.h"

int main(){

    //Seccion 1
    //Se declaron 2 variables inicializadas. 
    int dato1 = 0;
    float dato2 = 0;

    //Se definen valores por cuestiones del ejercicio. 
    //dato1 = 5;
    //dato2 = 10.5;

    //Seccion 2
    printf("Digita dos numeros mayores a 0: ");
    scanf("%i %f", &dato1, &dato2);

    //Se declaran variables donde se guardara el valor de las operaciones. 
    float suma = dato1 + dato2;
    float resta = dato1 - dato2;
    float multiplicacion = dato1 * dato2;
    float division = 0.0; //Esta variable solo se inicializa

    //Se condiciona si el denominador es mayor a 0 para poder dividir. 
    if(dato2 > 0){  
        division = dato1/dato2;
    }else{
        printf("Tu divisor es 0, no se puede realizar la division \n");
    }

    //Se imprimen los resultados.
    printf("Suma: %.2f \n", suma);
    printf("Resta: %.2f \n", resta);
    printf("Multiplicacion: %.2f \n", multiplicacion);
    printf("Division: %.2f \n", division);
    

    //Regresamos el control al SO.
    return 0;
}