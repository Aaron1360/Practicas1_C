/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de Creación: 09/08/2022
*
*6.-Generar un algoritmo que permita imprimir los 
*números de la serie de Fibonacci, cuando se ingrese 
*el número de elementos a desplegar. Considerar que 
*el primer número (0) será el elemento 0 de la serie, 
*y seguriá como 0,1,1,2,3,5,8,13,21,34,...
*/

#include<stdio.h>

int main()
{
    int a=0,b=1,c=1,n;
    
    printf("*****SERIE DE FIBONACCI*****\n");
    //entrada del usuario
    printf("\nIngresa el número de elementos a imprimir:");
    scanf("%d",&n);
    
    printf("%d",a);
    
    //algoritmo
    while(n>1)
    {
        printf(",%d",c);
        c=a+b;//siguiente valor de la serie 
        a=b;
        b=c;
        n--;//contador
    }
    return 0;
}
