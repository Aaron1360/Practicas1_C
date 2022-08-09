/*
*Desarrollador:Aaron Moreno Villeda
*Fecha creacion:08/08/2022
*
*2.-Generar el algoritmo que indique si al ingresar un número entero positivo, 
*este es par o impar (Ayuda: El algoritmo del ejercicio 1 puede ser útil en esta parte).
*/
#include<stdio.h>

int main()
{
    int numero=0;
    
    printf("******NUMERO PAR/IMPAR******\n");
    printf("\nIngresa un numero>>>");
    scanf("%d",&numero);
    puts("\n");
    
    if(numero%2 == 0)  
    printf("\n>>>El numero es par");
    
    else
    printf(">>>El numero es impar");
    //printf("\n\n%d",numero);
    
    return 0;
}
