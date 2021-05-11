#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv [])

{
  {
   int g = atoi(argv[1]); //segundo arreglo
    if (g < 0)
  {
      printf ("ingresa clave valida");
      return 1;
  }
   else
  {
    if (g >= 0)
    {
    printf("clave aceptada\n");
    }
  }

/////////////////////////////Convierte letras las letras de unas a otras dependiendo la clave ingresada  en la parte de arriba///////////////////////////
///// Pasa de la "A" a la "Z" sin pasar por simbolos y se salta hasta las "a" y "z" en ciclo de acuerdo con el Decimal ASII chart/////
    string s = get_string("Text no encriptado: ");
    printf("Text encriptado:  ");

    for (int i = 0, n = strlen(s); i < n; i++) // primer arreglo

    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
          
          printf("%c", (((s[i] - 'a') + g) % 26) + 'a');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
          printf("%c", (((s[i] - 'A') + g) % 26) + 'A');
        }              //// esta parte la tome en un principio del word puesto en el github que me convierte minusculas
                       //// a mayusculas y biseversa
        else
        {
            printf("%c", s[i]);
        }
    }          /// Agregue esta parte para que me respetara los espacios entre palabras
    printf("\n");
  }
}
//// Comence con el cuerpo principal del codigo, use el codigo del word compartido en el github que cambia mayusculas a minusculas como cuerpo principal.
Tuve algunas trabas porque no me respetaba espacios y lo modifique para que me aceptara estos espacios y que  el rango de la convesrion lo tomara solo las letras y no me contara 
los simbolos intermedios entre las mayusculas y las minusculas de acuerdo con el Decimal ASII chart. Busque algunas funciones extra como s[], argv, argc y atoi que me complementaban mi codigo.
Tuve muchas trabas debido a que no sabia como usar algunos comandos y funciones, me tarde muchisimo en encontrar una solución eh incluso hoy en día aún tengo mis dudas de cuando utilizar argc y cuando argv.
Finalmente agregue una condición buleana sencilla para que me aceptara solo numeros enteros. ////
////Mi codigo tiene una falla y esque si acepta palabras o numeros decimales como llave, más sin embargo, no encripta hasta que pones un número entero por la condición que agregue. 
Otro problema con el que me enfrente fue que no me aceptaba el número de las letras solo las letras tal cual como por ejemplo el 69 para "A". El manejo de los números enteros tampoco se me da
y es que al crear la condición booleana no supe como introducir el printf("%i\n) o un numero entero con int g = get_int para que solo me aceptara numeros enteros y no letras como a veces sucede.
En la llave no tuve ningún problema puesto que tome las notas de clase y fue muy sencillo adaptarlas. Solo agregué atoi para que asignar valores numericos. ////
