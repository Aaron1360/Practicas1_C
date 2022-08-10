/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creación:10/08/2022 
*
*7.-Desarrollar un algoritmo con una calculador que convierta de °C a °F y viceversa. 
*(Considerar las restricciones de los límites de temperatura, valores de temperatura en el dominio de los reales, etc).
*/

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
  bool lp=0;
  double temp=0,f=0,c=0;
  char escala;
  
  while(lp==0)
  {
    printf("\n*****CONVERSIÓN DE TEMPERATURA*****\n");

    printf("\nElige la escala de temperatura a ingresar (Fahrenheit/Celcius)[F]/[C]");

    scanf("%c",&escala);
    escala=toupper(escala);
    
    if(escala=='F' || escala=='C'){lp=1;}
    else{system("clear");}
  }
  /*
  getch();
  printf("\n\n%c",escala);
  */
  printf("\nIntroduce el valor de la temperatura>>>>");
  scanf("%lf",&temp);
 
  switch(escala)
  {
    case 'F':
      f=temp;
      c=(f-32)*5/9;
      printf("\nCelcius=%.2lf",c);
      break;
    case 'C':
      c=temp;
      f=(c*9/5)+32;
      printf("\nFahrenheit=%.2lf",f);
      break;
    default:
      break;
  }
  return 0;
}
