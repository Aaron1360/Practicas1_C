/*Desarrollador: Aaron Moreno Villeda
 *Fecha de creación: 12/08/22
 *
 *8.-Generar un algoritmo que permita obtener y desplegar los N primeros números primos, 
 *en donde N es un número entero positivo que ingresa el usuario. Recordar que los números primos 
 *son aquellos que solo son divisibles entre si mismos y entre 1.
*/

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int numero);

int main()
{
    int n=0,prime=2,cont2=1;
    
    printf("*****NUMEROS PRIMOS*****\n");
    //valor de entrada
    printf("\nIngresa la cantidad de numeros primos a imprimir: ");
    scanf("%d",&n);
    puts("\n");
    
    //llama n veces a la funcion isPrime
    while(cont2<=n)
    {
        if(isPrime(prime)==true) 
        {
            printf("%d  ",prime);
            cont2++;
        }
        prime++;
    }
    return 0;
}
//funcion que confirma que un numero sea primo
bool isPrime(int numero)
{
    int cont1=0;
    if(numero <= 1) return false;
    
    for(int i=2;i<=numero;i++)
    {
        if(numero%i==0) cont1++;
        
        if(cont1 > 1) return false;
    }
    return true;
}
