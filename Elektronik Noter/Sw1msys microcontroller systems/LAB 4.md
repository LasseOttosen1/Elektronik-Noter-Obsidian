OPgave 1: 
Lav et keyboard.

Man initilizer stack pointeren.
Så outer man 0xFF på DDRB altså laver B, som er led'erne og buzzeren. Så de virker som output.

Så starter HERE:

Vi læser her PINA, som er knapperne. Og smider det over i R20. så sammenligner vi det med 0xFF altså 1111 1111.
Hvis de er ens, altså = ingen knapper trykket ned, så hopper den tilbage til here. hvis så noget er trykket ned så går den til resten af programmet. Forklarin fortsætter nedeunder
![[Pasted image 20260915110925.png|457]]
![[Pasted image 20260915110933.png|284]]
Vi ændre værdien for R18 baseret på hvilken knap trykkes, så inverter vi R16, og sender det ud på PINB, så caller vi delayet, som også er her tonen bliver lavet, fordi ændrængen i tomen sker ved at vi høre "lyden fra buzzeren som kommer ud med PINB." 