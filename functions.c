/********************************************************************************
* functions.c: Skapande av funktioner för att beräkna summan, differensen,
*              produkten samt kvoten av två heltal.
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* get_sum: Returnerar summan av två heltal x och y.
* 
*          - x: Det första tal som skall summeras.
*          - y: Det andra tal som skall summeras.
********************************************************************************/
int get_sum(const int x, 
            const int y)
{
   return x + y;
}

/********************************************************************************
* get_difference: Returnerar differensen av två heltal x och y.
*
*                 - x: Det första tal som skall subtraheras.
*                 - y: Det andra tal som skall subtraheras.
********************************************************************************/
int get_difference(const int x,
                   const int y)
{
   return x - y;
}

/********************************************************************************
* get_product: Returnerar produkten av två heltal x och y.
*
*              - x: Det första tal som skall multipliceras.
*              - y: Det andra tal som skall multipliceras.
********************************************************************************/
int get_product(const int x,
                const int y)
{
   return x * y;
}

/********************************************************************************
* get_quotient: Returnerar kvoten av två heltal x och y som ett flyttal.
*               Flyttalsdivision används genom att typomvandla värdet på
*               heltal x till flyttal (från exempelvis 3 till 3.0) för att 
*               kvoten skall beräknas korrekt. Annars sker heltalsdivision,
*               där eventuella decimaler förloras, vilket är enklare för
*               processorn att genomföra.
* 
*               - x: Det första tal som skall divideras (täljaren).
*               - y: Det andra tal som skall divideras (nämnaren).
********************************************************************************/
double get_quotient(const int x,
                    const int y)
{
   return (double)x / y;
}

/********************************************************************************
* main.c: Beräknar summan, differensen, produkten samt kvoten av två heltal
*         x = 3 samt y = 4 och skriver ut respektive resultat i terminalen.
********************************************************************************/
int main(void)
{
   const int x = 3;
   const int y = 4;

   printf("%d + %d = %d\n", x, y, get_sum(x, y));
   printf("%d - %d = %d\n", x, y, get_difference(x, y));
   printf("%d * %d = %d\n", x, y, get_product(x, y));
   printf("%d / %d = %lg\n", x, y, get_quotient(x, y));
   
   return 0;
}