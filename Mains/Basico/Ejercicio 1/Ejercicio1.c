//Importanción de las bibliotecas basicas
#include "stdlib.h"
#include "stdio.h"

int main(){

    //Se declara una variable para guardar la opción que digite el usuario.
    int opcion = 0; //Se declara en 0 para que no tengamos errores en la ejecución y no agarre basura. 
    
    //Breve menu que se despliega al usario y muestra las opciones disponibles.
    printf("Bienvenido al menu \n");
    printf("1. Opcion a \n");
    printf("2. Opcion b \n");
    printf("3. Opcion c \n");
    printf("4. Opcion d \n");
    printf("Digite su opcion: ");
    
    //Registramos la entrada del teclado en la variable opcion.
    scanf("%i", &opcion);

    //Hacemos las condiciones para imprimir el mensaje dependiendo de la opción que se ingrese. 
    if(opcion == 1){
        printf("has seleccionado la opción: #a");
    }else if(opcion == 2){
        printf("has seleccionado la opción: #b");
    }else if(opcion == 3){
        printf("has seleccionado la opción: #c");
    }else{
        printf("has seleccionado la opción: #d");
    }

    //Regresamos el control al SO.
    return 0;
}


