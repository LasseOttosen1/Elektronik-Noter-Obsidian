#### NORMAL MODE
Timer bruges til at kunne tælle ting parralelt til microkontrollerns cpu.
![[Pasted image 20261020082048.png]]
timer 0 og 2: bruger en 8 bit til at tælle altså den har max på 255.
![[Pasted image 20261020082359.png|286]]
timer 1, 3, 4, 5: bruger et 16 bit til at tælle, altså 2 8 bits. Altså 65535

NORMAL MODE: de tæller fra 0 til deres max, og så overflower de, og tæller op igen. 
![[Pasted image 20261020084033.png|398]]
For at vælge hastigheden af ens timer bruger man en prescaler til at vælge den. Det kan være = cpu hastighedn = 1/8 v = 1/64 v = 1/256 v = 1/1024
Man vælger altså det her ved hjælp af de CSn0 - Csn2 register. 
timer 2 er lidt mere speciel, den har lidt flere valgmugligheder 
![[Pasted image 20261020084329.png|471]]
![[Pasted image 20261020084445.png]]![[Pasted image 20261020084344.png|493]]
![[Pasted image 20261020092543.png]]
Her er et eksempel på et regnestykke som udrenger hvor meget det her program er på: 
![[Pasted image 20261020092959.png]]
Nu smider jeg tallene ind i fromlen.
![[Pasted image 20261020092925.png|419]]
Her er svaret 


#### CTC MODE

