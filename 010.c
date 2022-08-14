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
  */
  int a,b,m,x,n,N;
  float u;
  
  printf("*****GENERADOR DE NUMEROS ALEATORIOS*****\n");
  
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
  scanf("%d",&x);
  
  system("clear");
  
  for(n=0;n<=N;n++)
  {
    x=((a*x)+b)%m;
    u=(float)x/m;
    
    printf("\nU%d: %.2f",n,u);
  }
  
  return 0;
}
