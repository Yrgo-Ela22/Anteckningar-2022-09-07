/********************************************************************************
* pointers.c: Demonstration av pekare i C.
* 
*             Pekare utgör datamedlemmar som pekar på adresser till andra
*             datamedlemmar. Exempelvis kan en intpekare (int*) peka på
*             adressen till en intvariabel (int).
* 
*             En pekare har följande syntax:
*             datatyp* namn = adress.
* 
*             Pekarens datatyp skall sättas till samma datatyp som 
*             datamedlemmen den pekar på, exempelvis double* ifall pekaren
*             skall peka på en variabel av datatypen double, const int* ifall
*             pekaren skall peka på en konstant av dataypen int.
* 
*             För att peka på adressen till en given datamedlem används den
*             så kallade adressoperatorn &, där exempelvis &x betyder adressen
*             till datamedlemmen x.
* 
*             Som exempel, låt en variabel av datatypen double döpt x
*             deklareras enligt nedan och initieras med startvärde 3.4:
*             double x = 3.4;
* 
*             Låt sedan en pekare döpt ptr1 peka på adressen till x via
*             nedanstående instruktion:
*             double* ptr1 = &x;
* 
*             Innehållet på adressen som ptr1 pekar på kan kommas åt via den
*             så kallade dereferensoperatorn *, där *ptr1 betyder innehållet
*             på adressen som ptr1 pekar på, dvs. innehållet i variabel x.
* 
*             Som exempel, via dereferensoperatorn * kan innehållet lagrat av 
*             variabel x ändras till 7.3 enligt nedan:
*             *ptr1 = 7.3;
* 
*             För pekare ptr1 gäller följande:
*             ptr1  => adressen som ptr1 pekar på (adressen till x).
*             *ptr1 => innehållet på adressen som ptr1 pekar på (innehållet
*                      lagrat av variabel x).
*             &ptr1 => adressen till pekaren ptr1, dvs. adressen där ptr1
*                      är lagrad på.
* 
*             För utskrift av adresser används formatspecificerare %p (pointer).
*             Som exempel, för att skriva ut adressen till en variabel döpt
*             x kan följande utskrift genomföras:
*             printf("The variable x is stored at address %p!\n", &x);
********************************************************************************/
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