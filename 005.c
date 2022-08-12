/*
*Desarrollador:Aaron Moreno Villeda
*
*Fecha de Desarrollo:09/08/2022
*5.-Generar un algoritmo que si se ingresan 3 números 
*positivos, se establezca que si son longitudes de líneas 
*rectas, estás puedan formar un triángulo. Solamente se 
*forma un triángulo, cuando la suma de las 2 longitudes
*de las rectas es mayor que la otra.
*/

#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("*****TRIANGULO*****\n");
    //valores ingresados por el usuario
    printf("\nIngresa el primer valor>>>>");
    scanf("%d",&a);
    printf("\nIngresa el segundo valor>>>>");
    scanf("%d",&b);
    printf("\nIngresa el tercer valor>>>>");
    scanf("%d",&c);
    
    //comprobar que la suma de las 2 longitudes de las rectas es mayor que la otra
    if((a+b)>c && (b+c)>a && (a+c)>b) printf("\nSI ES UN TRIÁNGULO");
    
    else printf("NO ES UN TRIÁNGULO");
    
    return 0;
}
