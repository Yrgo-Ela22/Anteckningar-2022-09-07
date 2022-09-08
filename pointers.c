/********************************************************************************
* pointers.c: Demonstration av pekare. Pekare utg�r datamedlemmar som pekar
*             p� adressen till en redan befintlig variabel. Via pekare kan
*             d�rmed adresser till variabler/konstanter passeras i st�llet 
*             f�r att passera kopior av dessa, vilket annars sker. Detta �r
*             s�rskilt f�rdelaktigt f�r st�rre datamedlemmar, som annars
*             kr�ver mycket resurser f�r kopiering samt f�r att sedan passera
*             kopian vid ett funktionsanrop eller dylikt.
* 
*             En pekare deklareras enligt nedan:
*             datatyp* i = 0;
* 
*             Pekarens datatyp skall vara samma som den medlem den pekar p�.
*             Som exempel, anta att en variabel x av datatypen int med 
*             startv�rde 3 deklareras enligt nedan:
*             int x = 3;
*              
*             Vi kan d� deklarera en pekare d�pt ptr som pekar p� x
*             enligt nedan:
*             int* ptr = &x;
* 
*             &x betyder adressen till x, d�r & utg�r den s� kallade 
*             adressoperatorn. Inneh�llet p� adressen som ptr pekar p�,
*             allts� inneh�llet i variabeln x, kan erh�llas via den s� kallade
*             dereferensoperatorn *, d�r *ptr inneb�r inneh�llet som ptr
*             pekar p�, allts� inneh�llet i variabel x, vilket �r 3. 
* 
*             Adressoperatorn & samt derefensoperatorn * �r varandras motsatser.
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* assign: Tilldelar heltal 5 och 7 till variabler p� angivna adresser. F�r att 
*         skriva till variablerna som pekarna a och b pekar p� anv�nds s� 
*         kallade derefenser, d�r *a kallas dereferensen av a och inneb�r 
*         "inneh�llet p� adressen som pekare a pekar p�".
* 
*         - a: Pekare till den f�rsta variabeln (pekar p� adressen).
*         - b: Pekare till den andra variabeln (pekar p� adressen).
********************************************************************************/
void assign(int* a,
            int* b)
{
   *a = 5; 
   *b = 7; 
   return;
}

/********************************************************************************
* print: Skriver ut inneh�llet p� angivna adresser, vilket �r tv� heltal.
*        F�r att komma �t inneh�llet (heltalen) p� adresserna) anv�nds 
*        dereferenser, d�r *a respektive *b inneb�r inneh�llet (heltalet)
*        p� respektive adress.
* 
*        - a: Pekare till det f�rsta heltalet.
*        - b: Pekare till det andra heltalet.
********************************************************************************/
void print(const int* a,
           const int* b)
{
   printf("a = %d\n", *a);
   printf("b = %d\n", *b);
   return;
}

/********************************************************************************
* main: Deklarerar tv� variabler x och y f�r lagring av heltal. 
*       Dessa variablers adressen passeras till funktionen assign f�r att
*       tilldelas heltal 5 och 7 via deras respektive adress. D�refter sker
*       utskrift via anrop av funktionen print, d�r adresserna �terigen passeras.
* 
*       F�r funktionen assign m�ste adresserna till x och y passeras f�r att
*       vi skall kunna skriva direkt till dessa variabler. Vid ett vanligt
*       funktionsanrop (utan pekare) passeras inte x och y, utan kopior av
*       dem. D� tilldelas heltal 5 och 7 till kopiorna, inte till de egentliga
*       variablerna x och y. Genom att passera adresserna ser vi till att
*       heltalen hamnar r�tt (p� adresserna till variabler x och y).
* 
*       I praktiken beh�ver ej adresserna passeras till funktionen print, d�
*       vi klarar oss med kopior av x och y f�r utskrift (kopiorna har samma
*       v�rde 5 och 7, s� inga pekare till x och y beh�vs).
********************************************************************************/
int main(void)
{
   int x = 0;
   int y = 0;

   assign(&x, &y);
   print(&x, &y);

   return 0;
}