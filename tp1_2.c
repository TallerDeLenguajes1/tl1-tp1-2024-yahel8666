#include <stdio.h>

float calcularCuadradoF1(float num); 
void calcularCuadradoF2(float num, float *cuadrado);
void mostrarVariable(float *punt); 
void invertir(float *a, float *b); 
void orden(float *a, float *b); 

int main ()
{
    float numero, cuadrado1; 
    printf("Ingrese un numero: "); 
    scanf("%f", &numero);

    //funcion de tipo float que calcula el cuadrado de un numero: 
    cuadrado1 = calcularCuadradoF1(numero);  
    printf("El cuadrado del numero es: %f \n", cuadrado1); 

    //funcion de tipo void que calcula el cuadrado de un numero: 
    float cuadrado2; 
    calcularCuadradoF2(numero, &cuadrado2);
    printf("El cuadrado del numero es: %f \n", cuadrado2);

    //Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    float variable; 
    printf("Ingrese una variable: \n", &variable); 
    float *pvar = &variable; 
    mostrarVariable(pvar); 

    //Dado dos parámetros de entrada, deberá invertir los valores entre ambos. 
    float a, b;
    printf("Ingrese el primer numero \n: "); 
    scanf("%f", &a);
    printf("Ingrese el segundo numero \n: ");
    scanf("%f", &b);
    invertir(&a, &b);  
    printf("Valores invertidos: a = %f, b = %f\n", a, b);

    // dado dos parametros, devolverlos de forma ordenada, primer parametro el mas chico, segundo el mas grande. 
    float num1, num2; 
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    ordenar(&num1, &num2); 
    printf("Los numeros ordenados son: a = %f y b = &f", num1, num2);

}

float calcularCuadradoF1(float num)
{
    return num*num; 
}

void calcularCuadradoF2(float num, float *cuad)
{
    *cuad = num*num;
}

void mostrarVariable(float *punt)
{
    printf("Dirección almacenada por el puntero: %p\n", punt);
    printf("Contenido apuntado por el puntero: %f\n", *punt);
}
void invertir(float *a, float *b)
{
    float aux; 
    aux = *a; 
    *a = *b; 
    *b = aux; 
}

void orden(float *a, float *b)
{
    float aux;
    if (*b < *a) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}