/********************************************************************************
* input.c: Inmatning av heltal från tangentbordet samt beräkning med addition,
*          subtraktion, multiplikation samt division.
* 
*          För att genomföra inmatning anropas funktionen scanf_s, Microsofts 
*          version av den C-gamla funktionen scanf. Ange formatspecificerare 
*          (indikerar vilken datatyp som skall matas in, exempelvis %d för 
*          heltal), och passera adressen till variabeln där innehållet ska
*          lagras, exempelvis &x för att passera adressen till variabeln x. 
*
*          I C används adressoperatorn & för att passera adresser, som medför
*          att en pekare till adressen utgör ingående argument till den 
*          anropade funktionen. 
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h> /* Bibliotek för inmatning och utskrift. */

/********************************************************************************
* main: Beräknar summan, differensen, produkten samt kvoten av två heltal 
*       x och y, som matas in från terminalen. 
********************************************************************************/
int main(void)
{
   int x = 0;
   int y = 0;

   printf("Enter an integer:\n");
   scanf_s("%d", &x);

   printf("\nEnter another integer:\n");
   scanf_s("%d", &y);

   printf("\n%d + %d = %d\n", x, y, x + y);
   printf("%d - %d = %d\n", x, y, x - y);
   printf("%d - %d = %d\n", x, y, x * y);
   printf("%d / %d = %lg\n", x, y, (double)x / y);

   return 0;
}
