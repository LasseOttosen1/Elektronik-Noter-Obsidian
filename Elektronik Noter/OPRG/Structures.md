

En struct bruges tit til at reprecentere et x og et y kordinat i et kordinatsystem. Man kan altså skrive det på en smart måde med en struct, her er den normale ikke smarte måde at lave en x og en y kordinat og udregne distancen mellem dem: 
![[Pasted image 20261023142845.png|609]]
Men man kan bruge en Struct 
struct {  
  string brand;  
  string model;  
  int year;  
} myCar1, myCar2; // We can add variables by separating them with a comma here  
  
// Put data into the first structure  
myCar1.brand = "BMW";  
myCar1.model = "X5";  
myCar1.year = 1999;  
  
// Put data into the second structure  
myCar2.brand = "Ford";  
myCar2.model = "Mustang";  
myCar2.year = 1969;  
  
// Print the structure members  
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";  
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
https://www.w3schools.com/cpp/cpp_structs.asp
![[Pasted image 20261023143151.png|248]]
Her bliver den brugt til at repræsentere et point i et kordinat system ligesom før 
![[Pasted image 20261023143324.png|484]]
## Header files
![[Pasted image 20261023141919.png]]
Man kan bruge en header file til at simplificere programmer, ved simpelthen at have skrevet fx: en funktion i et program, og så kalde på den i et andet. 

I sit main program, der kalder man på header filen, header filen den pejer på en fil i et andet .cpp program, i .cpp programmet, der skriver man koden til hvad funktionen skal gøre 
