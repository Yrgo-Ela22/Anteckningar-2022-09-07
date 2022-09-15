/********************************************************************************
* functions.c: Demonstration av egenskapade funktioner i C.
* 
*              En funktiodefinition har följande syntax i C:
* 
*              returtyp namn(funktionsparametrar)
*              {
*                 Här skrivs funktionens innehåll.
*              }      
* 
*              Returtypen indikerar datatypen på det värde som returneras
*              när funktionen avslutas, exempelvis int för heltal eller
*              double för flyttal. Ifall inget returvärde skall returneras
*              skall returtypen void användas. För att returnera data används
*              nyckelordet return följt av värdet som skall returneras. 
* 
*              Som exempel, för att returnera flyttalet 3.4 från en funktion
*              med returtypen double kan följande instruktion skrivas:
*              return 3.4;
*
*              För voidfunktioner, där inget värde returneras, är nyckelordet 
*              return valbart, men kan användas för att tydliggöra var 
*              funktionen avslutas.
* 
*              I parentesen efter funktionsnamnet skrivs funktionsparametrar.
*              Funktionsparametrarna anges datatyp på eventuell data som
*              passeras till funktionen. En funktion kan ha valfritt antal
*              funktionsparametrar. Ifall funktionsparametrar saknas skall
*              nyckelordet void skrivs i parentesen, alternativt kan parentesen
*              hållas tom.
* 
*              Funktionens början och slut markeras via måsvingar { }. Mellan
*              dessa måsvingar skrivs funktionens innehåll.
* 
*              returtyp namn(funktionsparametrar) kallas funktionshuvudet
*              och ger information om vad som returneras, vad funktionen
*              heter samt vilka parametrar som skall passeras till funktionen.
* 
*              Resten av funktionen kallas funktionskroppen och utgörs av
*              funktionens innehåll.       
* 
*              Funktioner som anropas måste antingen definieras eller deklareras
*              innan de anropas. Detta kan genomföras genom att placera
*              funktionsdefinitionen (funktionshuvudet + funktionskroppen)
*              ovanför funktionsanropet, alternativt så kan funktionen
*              deklareras innan anropet och sedan defininieras på annan plats.
* 
*              En funktionsdeklaration består enbart av funktionshuvudet,
*              avslutat med ett semikolon, såsom nedan:            
*              returtyp namn(funktionsparametrar);
* 
*              ------------------------------------------------------------------
*              OBS! Nedanstående information utgör lite extra information,
*              som kommer behandlas i framtiden, men som inte används här.
*              ------------------------------------------------------------------
* 
*              Funktioner är som default externa, vilket innebär att de är
*              åtkomliga utanför aktuell fil. Funktioner kan hållas lokala
*              till en given källkodsfil via nyckelordet static, vilket som
*              en tumregel bör göras för funktioner som enbart skall användas 
*              lokalt (vilket förenklar för kompilatorn att optimera koden).
*              Sådana funktioner kallas statiska. 
* 
*              En statisk funktion deklareras enligt nedan:
*              static returtyp namn(funktionsparametrar);
* 
*              Statiska funktioner med väldigt lite innehåll kan sättas till
*              inline-funktioner via nyckelordet inline för att föreslå för
*              kompilatorn att funktionens innehåll skall klistras in på
*              plats där funktionen anropas i stället för ett regelrätt anrop.
*              Detta är fördelaktigt, då anrop samt återhopp från en liten
*              funktion kan kräva fler instruktionscykler än att genomföra
*              funktionens innehåll. Detta fungerar dock enbart för statiska
*              funktioner.
* 
*              En inline-funktion deklareras enligt nedan:
*              static inline returtyp namn(funktionsparametrar);
********************************************************************************/
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