LAV EN LYSDÆMPER:
Starter med at sætte DDRB, 0 altså lysdiode 0, til 1. Så den er et output. Det er det som SBI gør

Så setter jeg hele DDRA til 0. Det er lidt en sus måde at gøre det på, jeg sætter R16 til 0xFF og så vender jeg alle bits, og derefter sender jeg dem ud


![[Pasted image 20260915115114.png]]
Nu har vi main funktionen. Her sætter jeg en masse værdier for R21, ud efter hvilken knap jeg trykket på i PINA.

Herefter Sender jeg et posativt ud på diode 0, og herefter kopier jeg R21 over i R18, det ændre mit delay.
Herefter caller jeg delayed, og så sender jeg et 0 ud på diode 0, altså slukker den.
så sætter jeg R18 til 128, af en eller anden grund stod i opgave. og så kalder jeg delayet igen, og så starter here igen.

Jeg tror det virker sådan at når delayed bliver meget småt, så er den næsten lige så tænt som den er slukket , og så lyser led ikke så meget, når deleyet bliver længere
![[Pasted image 20260915115304.png]]
![[Pasted image 20260915115712.png]]