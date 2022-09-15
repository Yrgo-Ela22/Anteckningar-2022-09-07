/********************************************************************************
* functions.c: Demonstration av egenskapade funktioner i C.
* 
*              En funktiodefinition har f�ljande syntax i C:
* 
*              returtyp namn(funktionsparametrar)
*              {
*                 H�r skrivs funktionens inneh�ll.
*              }      
* 
*              Returtypen indikerar datatypen p� det v�rde som returneras
*              n�r funktionen avslutas, exempelvis int f�r heltal eller
*              double f�r flyttal. Ifall inget returv�rde skall returneras
*              skall returtypen void anv�ndas. F�r att returnera data anv�nds
*              nyckelordet return f�ljt av v�rdet som skall returneras. 
* 
*              Som exempel, f�r att returnera flyttalet 3.4 fr�n en funktion
*              med returtypen double kan f�ljande instruktion skrivas:
*              return 3.4;
*
*              F�r voidfunktioner, d�r inget v�rde returneras, �r nyckelordet 
*              return valbart, men kan anv�ndas f�r att tydligg�ra var 
*              funktionen avslutas.
* 
*              I parentesen efter funktionsnamnet skrivs funktionsparametrar.
*              Funktionsparametrarna anges datatyp p� eventuell data som
*              passeras till funktionen. En funktion kan ha valfritt antal
*              funktionsparametrar. Ifall funktionsparametrar saknas skall
*              nyckelordet void skrivs i parentesen, alternativt kan parentesen
*              h�llas tom.
* 
*              Funktionens b�rjan och slut markeras via m�svingar { }. Mellan
*              dessa m�svingar skrivs funktionens inneh�ll.
* 
*              returtyp namn(funktionsparametrar) kallas funktionshuvudet
*              och ger information om vad som returneras, vad funktionen
*              heter samt vilka parametrar som skall passeras till funktionen.
* 
*              Resten av funktionen kallas funktionskroppen och utg�rs av
*              funktionens inneh�ll.       
* 
*              Funktioner som anropas m�ste antingen definieras eller deklareras
*              innan de anropas. Detta kan genomf�ras genom att placera
*              funktionsdefinitionen (funktionshuvudet + funktionskroppen)
*              ovanf�r funktionsanropet, alternativt s� kan funktionen
*              deklareras innan anropet och sedan defininieras p� annan plats.
* 
*              En funktionsdeklaration best�r enbart av funktionshuvudet,
*              avslutat med ett semikolon, s�som nedan:            
*              returtyp namn(funktionsparametrar);
* 
*              ------------------------------------------------------------------
*              OBS! Nedanst�ende information utg�r lite extra information,
*              som kommer behandlas i framtiden, men som inte anv�nds h�r.
*              ------------------------------------------------------------------
* 
*              Funktioner �r som default externa, vilket inneb�r att de �r
*              �tkomliga utanf�r aktuell fil. Funktioner kan h�llas lokala
*              till en given k�llkodsfil via nyckelordet static, vilket som
*              en tumregel b�r g�ras f�r funktioner som enbart skall anv�ndas 
*              lokalt (vilket f�renklar f�r kompilatorn att optimera koden).
*              S�dana funktioner kallas statiska. 
* 
*              En statisk funktion deklareras enligt nedan:
*              static returtyp namn(funktionsparametrar);
* 
*              Statiska funktioner med v�ldigt lite inneh�ll kan s�ttas till
*              inline-funktioner via nyckelordet inline f�r att f�resl� f�r
*              kompilatorn att funktionens inneh�ll skall klistras in p�
*              plats d�r funktionen anropas i st�llet f�r ett regelr�tt anrop.
*              Detta �r f�rdelaktigt, d� anrop samt �terhopp fr�n en liten
*              funktion kan kr�va fler instruktionscykler �n att genomf�ra
*              funktionens inneh�ll. Detta fungerar dock enbart f�r statiska
*              funktioner.
* 
*              En inline-funktion deklareras enligt nedan:
*              static inline returtyp namn(funktionsparametrar);
********************************************************************************/
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