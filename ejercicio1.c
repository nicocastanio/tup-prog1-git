#include <stdio.h>
// 1) Crear un programa que permita convertir un importe en dolares a pesos. 

main() 
{
  float valor_dolar = 0; 
  float tipo_cambio = 0 ; //    // hardcodeado hardcoded 
  float valor_peso = 0; 

  // ingrese valor en Dol
  printf("Ingrese valor en Dolares: ");
  scanf("%f", &valor_dolar);
  printf("Ingrese Cotizacion: ");
  scanf("%f", &tipo_cambio);

  valor_peso = valor_dolar * tipo_cambio; 

  printf("Importe en pesos $ %.2f \n", valor_peso); 

}
