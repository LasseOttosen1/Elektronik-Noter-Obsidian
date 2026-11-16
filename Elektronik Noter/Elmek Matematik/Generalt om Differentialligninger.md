vi skal bruge leibnitz notation
$f'(x)=\frac{df}{dx}$
simpel general løsning DL eks:
$\frac{dy}{dx}=3x^{2}$
$\int{dy}=\int{3x{2}\space dx}$
$y=x^{3}+k$

STANDARD FORM
$\frac{dy}{dx} + P(x)*y=Q(x)$


###### regneregler
$\int{dx}=x$
$\int{dx(x*y)}=x*y$
![[Pasted image 20261102091856.png|356]]
![[Pasted image 20261102091754.png|448]]

Hvis man har en fnuktion som består af endten en spole, eller en kondensatore. Er det et 1.ordens differenatialligning. 
Men hvis der er begge, et såkaldt RCL kredsløb, så er det en 2.ordens differentialligning. 

### Første ordens differentialligning 
![[Pasted image 20261116083437.png|430]]
Eksempel på et første ordens kredsløb 
![[Pasted image 20261116083603.png|408]]

### Anden ordens differentialligning
![[Pasted image 20261116083854.png|436]]
Homogen differentialligning:
![[Pasted image 20261116084057.png]]
#### For homogen ligning:
Karakterligningen: $ak^2 + bk + c = 0$, med rødderne $k = \dfrac{-b \pm \sqrt{b^2 - 4ac}}{2a}$ 
diskriminanten $D = b^2 - 4ac$.
##### case I
$D>0$: fuldstændig løsning $Y_h(x) = A e^{k_1 x} + B e^{k_2 x}$.
hvor $A$ og $B$ er reelle tal, $A, B \in \mathbb{R}$.

##### Case II
$D<0$: $k = \dfrac{-b \pm \sqrt{D}}{2a} = -\dfrac{b}{2a} \pm j\dfrac{\sqrt{4ac-b^2}}{2a}$,
hvor $\alpha = -\dfrac{b}{2a}$ og $\beta = \dfrac{\sqrt{4ac-b^2}}{2}$.

Fuldstændig homogen løsning: $Y_h(x) = e^{\alpha x}\bigl(A\cos(\beta x) + B\sin(\beta x)\bigr)$.

##### Case III
$D = 0$: 
$k = k_1 = k_2$ (dobbelt rod), 
$y_1(x) = e^{k_1 x} = e^{k_2 x}$, 
$y_2(x) = x\,e^{k x}$,  
$Y_h(x) = (A + Bx)\,e^{k x}$.

eksempel på et anden ordens kredsløb

![[Pasted image 20261116083521.png|477]]