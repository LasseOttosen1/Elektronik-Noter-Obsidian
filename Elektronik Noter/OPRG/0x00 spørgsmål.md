### Focus points

- Simple data types
    - What kind of data can a computer handle?
    En computer kan kun klare data i form af 1' og 0'. Når vi skriver et program i et high level programeringssprog som fx: C++, så skal programmet laves om til 1' og 0'
     Der er 2 måder at gøre det på, ved hjælp af en compiler, eller en interpreter.
    Forskillen er lidt underlig synes jeg, men en compiler og en interpreter gør lidt det samme. De laver high-level sprog, om til noget maskinen kan forstå. En compiler er hurtigere, men den er åbenbart svæere at debug, hvor en interpreter er lidt langsomere, men lættere at debug. En interpreter holder også styr på dit ram, hvilket en compiler ikke gør. 
    - Which values are allowed for each type?
    hvis du har en string, kan den modtage tekst.
     Hvis du bruger "int", kan det modtege et tal, men kun hele tal
     Hvsi du bruger double, eller float kan du skrive decimaltal, men hvis du vil lave matematik med et helt tal, som nok kommer til at blive et desimal tal skal du bruge at skrive 1.0 eksempel på hvordan man bruger float og double 
   ```ccp fold
   #include <stdio.h> 

int main(){

    double num = 123.456789123456;
    
    printf("Value = %.15lf", num);

    return 0;

}
   ```
    ```ccp fold 
    #include <stdio.h>

int main(){
    
    float num = 123.456789123456;

    printf("Value = %.15lf", num);

    return 0;
}
    ```
	- What are their sizes?
    - How can we use them in calculations?
    
- Variables
    - What are they?
    En variabel er bare en ting som du giver et værdi, det kan være et tal eller det 
    - Declaration – How do we define type, name and possible initial value?
- Useful libraries
    - <iostream> – Input and output
    - <cmath> – Mathematical functions
- Input/output
    - cout: How do you write (output) something on the screen?
    - cin: How do you get data (input) from the user?