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
  
  system("clear");
  
  printf("VALORES\na=%d\tb=%d\tm=%d\tN=%d\tx=%.2f\n\n");
  
  for(n=0;n<N;n++)
  {
    temp=(a*x)+b;
    u=x/m;
    x=fmod(temp,m);
    
    printf("temp=%.2f\nx=%.2f\nu=%.4f\n\n",temp,x,u);
  }
  
  
  return 0;
}
