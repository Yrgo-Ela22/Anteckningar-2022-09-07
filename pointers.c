/********************************************************************************
* pointers.c: Demonstration av pekare i C.
* 
*             Pekare utg�r datamedlemmar som pekar p� adresser till andra
*             datamedlemmar. Exempelvis kan en intpekare (int*) peka p�
*             adressen till en intvariabel (int).
* 
*             En pekare har f�ljande syntax:
*             datatyp* namn = adress.
* 
*             Pekarens datatyp skall s�ttas till samma datatyp som 
*             datamedlemmen den pekar p�, exempelvis double* ifall pekaren
*             skall peka p� en variabel av datatypen double, const int* ifall
*             pekaren skall peka p� en konstant av dataypen int.
* 
*             F�r att peka p� adressen till en given datamedlem anv�nds den
*             s� kallade adressoperatorn &, d�r exempelvis &x betyder adressen
*             till datamedlemmen x.
* 
*             Som exempel, l�t en variabel av datatypen double d�pt x
*             deklareras enligt nedan och initieras med startv�rde 3.4:
*             double x = 3.4;
* 
*             L�t sedan en pekare d�pt ptr1 peka p� adressen till x via
*             nedanst�ende instruktion:
*             double* ptr1 = &x;
* 
*             Inneh�llet p� adressen som ptr1 pekar p� kan kommas �t via den
*             s� kallade dereferensoperatorn *, d�r *ptr1 betyder inneh�llet
*             p� adressen som ptr1 pekar p�, dvs. inneh�llet i variabel x.
* 
*             Som exempel, via dereferensoperatorn * kan inneh�llet lagrat av 
*             variabel x �ndras till 7.3 enligt nedan:
*             *ptr1 = 7.3;
* 
*             F�r pekare ptr1 g�ller f�ljande:
*             ptr1  => adressen som ptr1 pekar p� (adressen till x).
*             *ptr1 => inneh�llet p� adressen som ptr1 pekar p� (inneh�llet
*                      lagrat av variabel x).
*             &ptr1 => adressen till pekaren ptr1, dvs. adressen d�r ptr1
*                      �r lagrad p�.
* 
*             F�r utskrift av adresser anv�nds formatspecificerare %p (pointer).
*             Som exempel, f�r att skriva ut adressen till en variabel d�pt
*             x kan f�ljande utskrift genomf�ras:
*             printf("The variable x is stored at address %p!\n", &x);
********************************************************************************/
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