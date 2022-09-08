/********************************************************************************
* functions.c: Skapande av funktioner f�r att ber�kna summan, differensen,
*              produkten samt kvoten av tv� heltal.
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* get_sum: Returnerar summan av tv� heltal x och y.
* 
*          - x: Det f�rsta tal som skall summeras.
*          - y: Det andra tal som skall summeras.
********************************************************************************/
int get_sum(const int x, 
            const int y)
{
   return x + y;
}

/********************************************************************************
* get_difference: Returnerar differensen av tv� heltal x och y.
*
*                 - x: Det f�rsta tal som skall subtraheras.
*                 - y: Det andra tal som skall subtraheras.
********************************************************************************/
int get_difference(const int x,
                   const int y)
{
   return x - y;
}

/********************************************************************************
* get_product: Returnerar produkten av tv� heltal x och y.
*
*              - x: Det f�rsta tal som skall multipliceras.
*              - y: Det andra tal som skall multipliceras.
********************************************************************************/
int get_product(const int x,
                const int y)
{
   return x * y;
}

/********************************************************************************
* get_quotient: Returnerar kvoten av tv� heltal x och y som ett flyttal.
*               Flyttalsdivision anv�nds genom att typomvandla v�rdet p�
*               heltal x till flyttal (fr�n exempelvis 3 till 3.0) f�r att 
*               kvoten skall ber�knas korrekt. Annars sker heltalsdivision,
*               d�r eventuella decimaler f�rloras, vilket �r enklare f�r
*               processorn att genomf�ra.
* 
*               - x: Det f�rsta tal som skall divideras (t�ljaren).
*               - y: Det andra tal som skall divideras (n�mnaren).
********************************************************************************/
double get_quotient(const int x,
                    const int y)
{
   return (double)x / y;
}

/********************************************************************************
* main.c: Ber�knar summan, differensen, produkten samt kvoten av tv� heltal
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