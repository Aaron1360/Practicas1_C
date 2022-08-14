/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creacion: 14/08/22
*
*10.-Generar un algortimo que permita obtener una cantidad N de números pseudoaleatorios (donde N es un número entero, mayor a 0) 
*utilzando para ello el método/algoritmo de Generación de números congruencial.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  /*
  *PARAMETROS
  *a-Multiplicador
  *b-Sesgo
  *m-Módulo
  *x-Semilla
  *n-contador(número de elementos)
  *N-Número de elementos a obtener(entrada del usuario)
  *u-Número aleatorio
  *temp-temporal
  */
  int a,b,m,n,N;
  float x,u,temp;
  
  printf("*****GENERADOR DE NUMEROS ALEATORIOS*****\n");
  //INGRESAR VALORES
  printf("\nIngresa los parametros (a),(b) y (m)");
  printf("\n\nMultiplicador (a)>>> ");
  scanf("%d",&a);
  printf("\nSesgo (b)>>> ");
  scanf("%d",&b);
  printf("\nMódulo (m)>>> ");
  scanf("%d",&m);
  printf("\nIngresa el numero de elementos a obtener (N)>>> ");
  scanf("%d",&N);
  printf("\nSemilla (x)>>> ");
  scanf("%f",&x);
  //MOSTRAR VALORES
  system("clear");
  printf("*****GENERADOR DE NUMEROS ALEATORIOS*****\n");
  printf("VALORES\na=%d\tb=%d\tm=%d\tN=%d\tx=%.2f\n\n",a,b,m,N,x);
  //GENERACION DE NUMEROS CONGRUENCIAL
  for(n=0;n<N;n++)
  {
    temp=(a*x)+b;//VARIABLE TEMPORAL
    u=x/m;//NUMERO ALEATORIO
    x=fmod(temp,m);//NUEVO VALOR
    
    printf("\nu%d: %.4f",n,u);//SALIDA
  }
  
  return 0;
}
