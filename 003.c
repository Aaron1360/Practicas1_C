/*Fecha creacion:08/08/2022
*
*3.-Generar el algoritmo que indique si al ingresar un año como un número entero positivo, este sea o no bisiesto. 
*Un año es bisiesto si es múltiplo de 4, exceptuando los múltiplos de 100, que sólo son bisiestos cuando son múltiplos además de 400, 
*por ejemplo el año 1900 no fue bisiesto, pero el año 2000 si lo es. (De la misma forma, el ejercicio 1 es útil en la solución de este problema)
*/
#include<stdio.h>


int main()
{
  int num=0;
  printf("\t******AÑO BISIESTO******\n");
  //valor de entrada
  printf("\tIngresa el año>>> ");
  scanf("%d",&num);
  
  //comprobar que el valor es multiplo de 4 y no es multiplo de 100
  if(num%4==0 && num%100!=0)
  {
    printf("\n\t>>>ES BISIESTO");
  }
  //si el valor es multiplo de 100 comprueba que tambien sea multiplo de 400
  else  if(num%4==0 && num%100==0 && num%400==0)
     {
      printf("\n\t>>>ES BISIESTO");
     }
  //en cualquier otro caso no es un año bisiesto 
  else printf("\n\t>>>NO ES BISIESTO");
  return 0;
}
