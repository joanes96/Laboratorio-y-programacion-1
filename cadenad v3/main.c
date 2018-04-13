#include <stdio.h>
#include <stdlib.h>


int main()
{
   char palabra1 [15]="hola";
   char palabra2 [15];
   int i;
   int cant;
   int comp;
   printf ("Ingrese una palabra: ");
   fflush(stdin);
   gets(palabra1);

   while(strlen(buffer)>14)
   {
       printf("Reingrese palabra: ");
       fflush(stdin);
       gets(buffer);
   }

   stropy(palabra1,buffer);
   strcpy(palabra2, palabra1);
   /*cant = strlen(palabra1);*/
   comp=stromp(palabra1,palabra2);
   printf("\nResultado de la comparacion: %d", comp);
   printf("palabra1: %s\nPalabra2: %s", palabra1, palabra2);

   /*printf("%s", palabra2);*/


    return 0;
}
