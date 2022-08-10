/*
*Desarrollador: Aaron Moreno Villeda
*Fecha Creación: 09/08/2022
*
*4.-Generar el algoritmo que obtenga el Máximo 
*Común Divisor (MCD) y el mínimo común múltiplo de 
*un par de números enteros positivos. (Existe un 
*algoritmo ya establecido para este caso, se le 
*conoce como algoritmo de Euclídes)
*/

#include<stdio.h>


int main()
{
    int dividendo, divisor,residuo,mcd;
    
    printf("*****MAXIMO COMÚN DIVISOR*****\n");
    
    printf("Ingresa el valor del dividendo>>>");
    scanf("%d",&dividendo);
    
    printf("Ingresa el valor del divisor>>>");
    scanf("%d",&divisor);
    
    while(divisor!=0)
    {
        residuo=dividendo%divisor;
        
        dividendo=divisor;
        
        divisor=residuo;
        
        mcd=dividendo;
    }
    printf("\n\nMCD = %d",mcd);
    
    return 0;
}