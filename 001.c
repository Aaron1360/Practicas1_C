/*
 * Desarrollador	: AARON MORENO VILLEDA
 * Fecha creación	: 07/08/2022
 *
 * 1.-Generar el algoritmo que obtenga el residuo o módulo de la división de dos números enteros positivos. 
 * Por ejemplo, si se tienen dos números, 39 y 4, el residuo es 3, ya que 4 x 9 = 36 y entonces 39 - 36 = 3.
 */
 
 //LIBRERIAS
#include<stdio.h>

//PROTOTIPO DE FUNCIONES
int residuo(int a,int b);

//FUNCION PRINCIPAL CON ARGUMENTOS
int main(int argc, char **argv)
{
  //VARIABLES LOCALES
  int a,b;
  
  //CUERPO DEL PROGRAMA
  printf("\n************MODULO DE LA DIVISION************\n");
  
  printf("\ningresa el dividendo: "); scanf("%d",&a);
  printf("\ningresa el divisor: "); scanf("%d",&b);
  
  printf("\nMODULO: %d",residuo(a,b));
  //VALOR DE REGRESO
  return 0;
}

//DEFINICION DE FUNCIONES
int residuo(int a,int b)
{
  //VARIABLES LOCALES
  int res=0,temp=0;
  
  //CUERPO DEL PROGRAMA
  res=(int)a/b;
  temp=res*b;
  res=a-temp;
  
  //VALOR DE REGRESO
  return res;
}
