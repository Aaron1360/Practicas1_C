/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creacion: 14/08/22
*
*10.-Generar un algortimo que permita obtener una cantidad N de números pseudoaleatorios (donde N es un número entero, mayor a 0) 
*utilzando para ello el método/algoritmo de Generación de números congruencial.
*/

#include<stdio.h>

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
  */
  float a,b,m,x,n=0;
  int N;
  
  printf("*****GENERADOR DE NUMEROS ALEATORIOS*****\n");
  printf("\nIngresa los parametros (a),(b) y (m)");
  printf("\n\nMultiplicador (a)>>> ");
  scanf("%f",&a);
  printf("\nSesgo (b)>>> ");
  scanf("%f",&b);
  printf("\nMódulo (m)>>> ");
  scanf("%f",&m);
  
  printf("\n\nIngresa el numero de elementos a obtener (N)>>> ");
  scanf("%f",&N);
  
  
  
  return 0;
}
