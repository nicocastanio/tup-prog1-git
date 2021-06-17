#include <stdio.h>
#include <stdbool.h>
/*
4) Crea un programa que pida al usuario su código de usuario (un número entero) 
y su contraseña numérica (otro número entero), y no le permita seguir 
hasta que introduzca como código de usuario 1024 y como contraseña 4567

*/

main() 
{
  int usuario = 1024,contrasenia=4567,contra,user;

  //Arranco con un bucle para cuando sea erroneos los datos y vuelva a pedirmelos
  printf("Digite el usuario luego la contrasenia : ");
  scanf("%i %i",&user,&contra);
  
  while (user!=usuario || contra!=contrasenia)
  {
    printf ("Por favor Digite el usuario y la contrasenia correcta :");
    scanf ("%i %i",&user,&contra);
  }
  //evaluo si es correcta y le doy la bienvenida
  if (user==usuario && contra ==contrasenia)
  {
    printf("\t \t Bienvenido, se pudo logear con exito \n");
  }

  printf("\n");
 

}
