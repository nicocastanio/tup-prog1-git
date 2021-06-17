/*
3) Se ingresan números por teclado mientras que la suma de los mismos 
sea menor o igual a 100. 
Se debe informar la cantidad de números ingresados.
*/
#include <stdio.h>
// #define  VALOR_MAXIMO = 100; 

main() 
{
  int cant_nros = 0; // contador de nros
  int suma_nros = 0; // acumulador de nros 
  int nro_ingresado = 0;
  const int valor_max = 100;
  

  // while : ejecuta mientras cumpla la condicion. 0..n 
  // do.. while : ejecuta mientras cumpla la condicion. 1..n 
  // for  : cuando la cant iteraciones, o la forma de recorrer o incrementar es constante

  do
  {
    printf("Ingrese nro entero positivo: "); 
    scanf("%d", &nro_ingresado); 
    suma_nros = suma_nros + nro_ingresado ; // sumador o acumulador
    // suma_nros += nro_ingresado;
    cant_nros = cant_nros + 1;  // contador 
    // cant_nros += 1; 
    // cant_nros++; 
  } while ( suma_nros <= valor_max ); // hardcodeado 
  
  // restar 1 porque ya se paso del 100
  int diferencia = suma_nros - valor_max;  

  printf("Cantidad de numeros: %d \n", cant_nros); 
  printf("Diferencia con maximo: %d \n", diferencia);
  
}

