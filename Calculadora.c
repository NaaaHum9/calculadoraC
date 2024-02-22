#include "stdio.h"

//Prototipos
int suma(int num1, int num2);
int resta(int num1, int num2);

int main(){
    int num1, num2;
    int res;

    printf("\n ---Calculadora--- \n");
    printf("Ingrese el primer numero: \n");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%i", &num2);
    
    //funciones
    res = suma(num1, num2);
    printf("Resultado suma: %i\n", res);
    res = resta(num1, num2);
    printf("Resultado resta: %i\n", res);
}

int suma(int num1, int num2){
    return num1 + num2;
}

int resta(int num1, int num2){
    return num1 - num2;
}