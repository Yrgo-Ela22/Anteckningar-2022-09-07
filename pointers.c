/********************************************************************************
* pointers.c: Demonstration av pekare. Pekare utgör datamedlemmar som pekar
*             på adressen till en redan befintlig variabel. Via pekare kan
*             därmed adresser till variabler/konstanter passeras i stället 
*             för att passera kopior av dessa, vilket annars sker. Detta är
*             särskilt fördelaktigt för större datamedlemmar, som annars
*             kräver mycket resurser för kopiering samt för att sedan passera
*             kopian vid ett funktionsanrop eller dylikt.
* 
*             En pekare deklareras enligt nedan:
*             datatyp* i = 0;
* 
*             Pekarens datatyp skall vara samma som den medlem den pekar på.
*             Som exempel, anta att en variabel x av datatypen int med 
*             startvärde 3 deklareras enligt nedan:
*             int x = 3;
*              
*             Vi kan då deklarera en pekare döpt ptr som pekar på x
*             enligt nedan:
*             int* ptr = &x;
* 
*             &x betyder adressen till x, där & utgör den så kallade 
*             adressoperatorn. Innehållet på adressen som ptr pekar på,
*             alltså innehållet i variabeln x, kan erhållas via den så kallade
*             dereferensoperatorn *, där *ptr innebär innehållet som ptr
*             pekar på, alltså innehållet i variabel x, vilket är 3. 
* 
*             Adressoperatorn & samt derefensoperatorn * är varandras motsatser.
********************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* assign: Tilldelar heltal 5 och 7 till variabler på angivna adresser. För att 
*         skriva till variablerna som pekarna a och b pekar på används så 
*         kallade derefenser, där *a kallas dereferensen av a och innebär 
*         "innehållet på adressen som pekare a pekar på".
* 
*         - a: Pekare till den första variabeln (pekar på adressen).
*         - b: Pekare till den andra variabeln (pekar på adressen).
********************************************************************************/
void assign(int* a,
            int* b)
{
   *a = 5; 
   *b = 7; 
   return;
}

/********************************************************************************
* print: Skriver ut innehållet på angivna adresser, vilket är två heltal.
*        För att komma åt innehållet (heltalen) på adresserna) används 
*        dereferenser, där *a respektive *b innebär innehållet (heltalet)
*        på respektive adress.
* 
*        - a: Pekare till det första heltalet.
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
* main: Deklarerar två variabler x och y för lagring av heltal. 
*       Dessa variablers adressen passeras till funktionen assign för att
*       tilldelas heltal 5 och 7 via deras respektive adress. Därefter sker
*       utskrift via anrop av funktionen print, där adresserna återigen passeras.
* 
*       För funktionen assign måste adresserna till x och y passeras för att
*       vi skall kunna skriva direkt till dessa variabler. Vid ett vanligt
*       funktionsanrop (utan pekare) passeras inte x och y, utan kopior av
*       dem. Då tilldelas heltal 5 och 7 till kopiorna, inte till de egentliga
*       variablerna x och y. Genom att passera adresserna ser vi till att
*       heltalen hamnar rätt (på adresserna till variabler x och y).
* 
*       I praktiken behöver ej adresserna passeras till funktionen print, då
*       vi klarar oss med kopior av x och y för utskrift (kopiorna har samma
*       värde 5 och 7, så inga pekare till x och y behövs).
********************************************************************************/
int main(void)
{
   int x = 0;
   int y = 0;

   assign(&x, &y);
   print(&x, &y);

   return 0;
}