
 Opgave 1:
 Vi skal lave et program som spiller en masse toner som skal gå fra mørk til lysere, hurtiger og hurtigere. Vi starter med at lave et delay som skal findes. Vi ved at vores 2560Mega har en hastighed på 16Mhz det vil altså sige den laver en cykle hvert 
$1/16000000$ af et sekundt, eller den laver en mechinecykle 16000000 gange i sekundet
Vi skal lave et delay der svare til 4 mikrosekunder

nu skal vi regne ud hvor mange cykeltimes det er. så vi kan tage at vi har 16000000 operationer i sekundtet, og det skal vare 4 mikrosekunder
$16000000 \cdot 0.000004$ = 64
det vil altså sige at hvis vi skal have et delay på 4 mikrosekunder, skal der altså være 64 mechine cykles i programmet. Nu bruger jeg en solve kommando for at regne ud hvordan det skal se ud:
Vi har en værdi R17 som vi skal sætte til et tal for at der er 64 cykles i looped (det virker kun hvis jeg indsætter en nop, som bare er en ekstre maskincykle)
![[Pasted image 20260908110227.png|332]]
![[Pasted image 20260908105737.png]]
nu kan man se i simulatoren ovre til højre, at loopet tager 4 mikrosekunder :)))

Opgave 2:
