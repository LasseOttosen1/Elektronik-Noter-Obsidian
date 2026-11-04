``` c
void setToZero (int * p ) { * p = 0; } 

int main () { int a = 5; 
setToZero (& a );
 printf ("%d\n", a );
  return 0; } 
```
A. 5  
B. Adressen på a 
C. 0 X
D. Ingenting – programmet kan ikke oversætte
*den ændre variablen a til 0*

```c
```Spørgsmål 2. Hvad gør operatoren  i sætningen int x = *p;, hvor p har typen int?
```
A. Den giver adressen på p 
B. Den giver værdien, der ligger på den adresse, som p peger på X
C. Den ganger x med p 
D. Den erklærer en ny pointer, der hedder x

"den giver værdien der ligger på den adresse som p peger på "

![[Pasted image 20261104093027.png]]
det er en lille snyder, der mangler et gange  * foran pharry i sizeof operatioren, for at den ville pegje på de 80 bytes, men den fortæller faktisk lænden af typen pointer, som altid er 8 i et 64 sytem. 

![[Pasted image 20261104093218.png|554]]
ptr pejer på 40, fordi arrayet er 0 indekseret, og så minus 1, så den pegjer på 30 

![[Pasted image 20261104093324.png]]
forskillen er at en sizeof(s) siger 6, og en strlen(s) siger 5, det er fordi der står et usynligt \0 i slutningen af en tekst, og dermed tælles den med i sizeof, hvormod strlen stopper ved \0, som er usynligt. 
![[Pasted image 20261104093501.png]]

det er D
![[Pasted image 20261104093546.png]]
det står for

%s = string
%d = decimal
%c = char 
%p = pinter 
man skal bruge d

![[Pasted image 20261104093623.png]]

dette er en snyder igen, 
programmet tager fra en fil, og fortæller længden af et array, argv. Og den er åbenbart 4 fordi den tæller /calc med. 

![[Pasted image 20261104094300.png|559]]

B. 5
fordi at den tager og kopiere a ind i funktionen, men den returner ikke noget, den er altså en lokal variabel, og forsvinder herefter lige med det samme. 

![[Pasted image 20261104094502.png|584]]

det er D. 1 10, fordi at når filen læser variabel a ind i structen sætter den structen til 1, 2. Men herefter i move funktionen sker der ikke noget fordi det igen kun er en lokal variabel og det ikke ændre noget ved selve a. 

Men moveptr(&a) gør noget fordi den tager addressen og smider ind i funktionen, og den ændre a til det som pointeren siger, og det er 10. 