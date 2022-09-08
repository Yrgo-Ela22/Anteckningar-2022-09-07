/********************************************************************************
* input.c: Inmatning av heltal fr�n tangentbordet samt ber�kning med addition,
*          subtraktion, multiplikation samt division.
* 
*          F�r att genomf�ra inmatning anropas funktionen scanf_s, Microsofts 
*          version av den C-gamla funktionen scanf. Ange formatspecificerare 
*          (indikerar vilken datatyp som skall matas in, exempelvis %d f�r 
*          heltal), och passera adressen till variabeln d�r inneh�llet ska
*          lagras, exempelvis &x f�r att passera adressen till variabeln x. 
*
*          I C anv�nds adressoperatorn & f�r att passera adresser, som medf�r
*          att en pekare till adressen utg�r ing�ende argument till den 
*          anropade funktionen. 
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h> /* Bibliotek f�r inmatning och utskrift. */

/********************************************************************************
* main: Ber�knar summan, differensen, produkten samt kvoten av tv� heltal 
*       x och y, som matas in fr�n terminalen. 
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
