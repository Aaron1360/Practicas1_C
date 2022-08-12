/*Desarrollador: Aaron Moreno Villeda
*Fecha de creación: 12/08/22
*
*9.-Generar un algoritmo que permita el ingreso de un número entero positivo, 
*y representarlo como la suma de sus unidades, decenas, centenas..., esto es, si se ingresa el 
*valor de 1942 este debe de ser igual a 2 + 40 + 900 + 1000.
*/

#include<stdio.h>

int main()
{
    int n=0,temp=0,i=10;
    
    printf("*****SUMA*****\n\n");
    //valor de entrada
    printf("Ingresa un numero: ");
    scanf("%d",&n);
    puts("\n");
    
    //algoritmo
    while(n>0)
    {
        temp=n%i;//unidades
        n=(n-temp);//nuevo valor
        i*=10;//control de cifras
        printf("%d",temp);
        
        if(n>0) putchar('+');
    }
    
    return 0;
}
