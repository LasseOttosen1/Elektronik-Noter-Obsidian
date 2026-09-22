![[Pasted image 20260922104711.png]]
Her har vi en millard omregner som ligger 1 milliard til 2 milliarder.
Vi starter med at ligge 1 milliard i registerne R16,R17,R18,R19
![[Pasted image 20260922104902.png]]
og vi lægger 2 milliarder i registerne R20,R21,R22,R23

ADD ligger en reigster sammen med en anden register ex: ADD R16,R20  R16=R20 + R16
ADC ligger en register sammen med en anden register ex: ADC R16,R20  R16=R20 + R16 + carry
altså hvis tallet bliver størrere end 255, så kan carry' vidergiver imformation om tallet, og det er det programmet gør. 
ADD sætter også C=1 hvis det overstiger 255, men den ignorere den når den ligger registerne sammen, hvorimod adc ikke gør det, den sætter 1 bit posativ hvis c er posativ. 