Vi startede med at sætte vores Arduino Mega ordenligt op, og så skulle vi kigge på noget kode til den i microchip studio.
![[Pasted image 20260825111947.png]]Det korte og lange er at den starter med at tænde nogel tind på boardet, noget med hvilke pins der skal snakke. 

så bliver værdien R16 cleared, herefter start loopet.

LOOP:

værdien R17 bliver sat til at være 1 (her har jeg ændret det til 2)

så bliver R16 (som til at starte med er 0) og R17 adderet, det bliver gemt som R16
Så bliver funktionen Display and delay kaldet på.

DISPLAY AND DELAY:

Øh, tror den desplayer den værdi som R16 har, på de korrekte dioder, herefter delyer den.
R17 R18 bliver sat til =0, og R19 bliver sat til =100

Så  starter med at gå i again loopet

AGAIN:

R17 = 0, bliver -1, så den går og bliver 255
Herefter sprøger den om R17 = = 0, og det er den ikke den er 255. Så den starter looped igen, så den bliver 254, og så sprøger den igen. 
Når R17 =0, så går den en vidre, R18, bliver -1 og bliver 255, og så spørger den om R18 =0, og det er den ikke så den starter hele loopet forfra, altså bliver R17 sat til 255 igen, og så skal den gennemgå det hele igen. Den går en ned hvert tik, og der er 16 mil, hvert sekund, så der skal ret mange af sådan nogle tællinger til for at bremse timeren.
Så man kan styre tiden ved at ændre R19 værdi, hvis den bliver mindre, er systemet hurtigere.
