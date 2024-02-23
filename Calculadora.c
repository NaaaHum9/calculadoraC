#include "stdio.h"

//Prototipos
int suma(int num1, int num2);
int resta(int num1, int num2);
int multi(int num1, int num2);
int div(int num1, int num2);

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
    res = multi(num1, num2);
    printf("Resultado multiplicacion: %i\n", res);
    res = div(num1, num2);
    printf("Resultado division: %i\n", res);
    
}

int suma(int num1, int num2){
    return num1 + num2;
}

int resta(int num1, int num2){
    return num1 - num2;
}

int multi(int num1, int num2){
	return num1 * num2;
}

int div(int num1, int num2){
	return num1/num2;
}
