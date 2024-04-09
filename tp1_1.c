
#include <stdio.h>

int main () 
{   
    //Primer punto 
    printf("Hola mundo");
     
    // Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo.
    int variable = 2; 
    int * punt = &variable;

    // Muestre por pantalla lo siguiente: 
    // 1) El contenido del puntero:
    printf(" Contenido del puntero: %d\n", *punt);

    // 2) La dirección de memoria almacenada por el puntero
    printf(" Dirección de memoria almacenada por el puntero: %p\n", punt);

    // 3) La dirección de memoria de la variable
    printf(" Dirección de memoria de la variable: %p\n", &variable);

    // 4) La dirección de memoria del puntero
    printf(" Dirección de memoria del puntero: %p\n", &punt);

    // 5) El tamaño de memoria utilizado por la variable usando sizeof()
    printf(" Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(variable));
 
    return 0;
}