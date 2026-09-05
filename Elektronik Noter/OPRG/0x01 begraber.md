forklar følgende begraber:

if, else, string, cin, cout, &&, || .

"if": Man bruger det til at lave det man kalder et "if, loop" Det bruges når man laver en funktion som kun aktivere hvis noget sker
![[Pasted image 20260905105645.png]]

"Else": Bruges tit sammen med en if funktion, den kan aktivere hvis en if funktion ikke aktiveres.

"string": det er en type som laver en variabel der kan være en "string" af bogstaver. Altså en tekst stykke

"cin": sender data til programmet fra keyborded

"cout": programmet sender data ud til skærmen

"&&": giver en sandt eller falsk værdi hvis noget er 

![[Pasted image 20260905105802.png]]det her programm skriver du to værdier endten 0 eller 1, hvis du skriver det samme siger programmet true eller false, om de er ens eller ej.

```cc
#include <iostream>
using namespace std;

// Funktion der udfører logisk AND
bool logicalAnd(bool a, bool b) {
    return a && b; // Returnerer true kun hvis begge er true
}

int main() {
    bool x, y;

    cout << "Indtast to boolske værdier (0 for false, 1 for true): ";
    if (!(cin >> x >> y)) { // Input-validering
        cerr << "Ugyldigt input. Indtast kun 0 eller 1.\n";
        return 1;
    }

    bool result = logicalAnd(x, y);

    cout << boolalpha; // Udskriv true/false i stedet for 1/0
    cout << "Resultatet af AND: " << result << endl;

    return 0;
}

```
