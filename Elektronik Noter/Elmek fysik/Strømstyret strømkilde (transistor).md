En transistor 
![[Pasted image 20260910155005.png|378]]
er en fantastisk lille ting, Den tager en lille strøninput 
Ib (i base), og ganger det med en konstant B, saa giver det Ic (i collector)
![[Pasted image 20260910155326.png]]
vi lavede et lille forsøg hvor vi med et kredsløb som var opstillet således:
![[Pasted image 20260910155419.png|475]]
Vi skal altså finde frem til den her Konstant B, det gør vi ved at tage og dividere Ic med I,b.
$$Ic/Ib = B$$
Vi skal altså finde hvad de her 2 værdier er. 
Vi laver mange målinger med et realt kredsløb på breadbord og det digitale breadbord simileret 
![[Pasted image 20260910155640.png|367]]
Vi udregner altså Ib ved at bruge ohm's lov, og måle spændingsfaldet.
Nu kan vi altså lave et langt skema med alle vores værdier, vi ændre spændingen i V2 med 0.25 og nedskriver værdierne for hhv. Strømmen i ib (base på transistoren).
den målte strøm i amperemetret. 
![[Pasted image 20260910155942.png]]
vi laver også en graf:
![[Pasted image 20260910160100.png|389]]
vi har altså nu både Ic og Ib, og vi kan udregne B.
vi tager føst lige gennemsnittet af vores værdier fra cirka 1,25v til 3,5v. Der er ikke nok strøm i systemet, så til sidst stopper transistoren med at styre strømmen. fordi strømmen i Ic stopper med at ændre sig.
![[Pasted image 20260910160531.png]], fordi den er 1000 gange mindre end Ic, siden Ib er i micro A og Ic er i mili A.
nu finder vi et gennemsnit for B 
![[Pasted image 20260910160829.png]]
gennemsnittet er: 
![[Pasted image 20260910160839.png]]
det betyder altså at vi har nu en værdi for B, som vi kan bruge til at finde Ic når vi kender Ib.

En transistor er altså meget smart fordi den kan med en lille strøm styre en stor strømverdi i collectoren.
