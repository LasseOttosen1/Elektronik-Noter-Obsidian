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

#### Fuldstændig homogen løsning
Karakterligningen: $ak^2 + bk + c = 0$, med rødderne $k = \dfrac{-b \pm \sqrt{b^2 - 4ac}}{2a}$ 
diskriminanten $D = b^2 - 4ac$.
Fordi en 2 ordens homogen differentialligning  vil altid vil have karakter ligningen som løsning. 
fordi 
$e^{kx}$: $\dfrac{d^2}{dx^2}\left(e^{kx}\right) = k^2 e^{kx}$

$\dfrac{d}{dx}\left(e^{kx}\right) = k\,e^{kx}$

det vil altså sige man kan tage den ude for en parantes  
$e^{kx}\left(k^2 + k + c\right) = 0$
og $e^{x}$ kan aldriv være 0, derfor siger 0 reglen at den anden side må være nul altså $(k^2 + k + c)$ derfor er karakterligningen som den er. 
##### case I
$D>0$: fuldstændig løsning $Y_h(x) = A e^{k_1 x} + B e^{k_2 x}$.
hvor $A$ og $B$ er reelle tal, $A, B \in \mathbb{R}$.

##### Case II
$D<0$:

$k = \dfrac{-b \pm \sqrt{D}}{2a} = -\dfrac{b}{2a} \pm j\dfrac{\sqrt{4ac-b^2}}{2a}$,
hvor $\alpha = -\dfrac{b}{2a}$ og $\beta = \dfrac{\sqrt{4ac-b^2}}{2}$.

Fuldstændig homogen løsning: $Y_h(x) = e^{\alpha x}\bigl(A\cos(\beta x) + B\sin(\beta x)\bigr)$
hvor $A$ og $B$ er reelle tal, $A, B \in \mathbb{R}$.

##### Case III
$D = 0$: 
$k = k_1 = k_2$ (dobbelt rod), 
$y_1(x) = e^{k_1 x} = e^{k_2 x}$, 
$y_2(x) = x\,e^{k x}$,  
$Y_h(x) = (A + Bx)\,e^{k x}$.
hvor $A$ og $B$ er reelle tal, $A, B \in \mathbb{R}$.

eksempel på et anden ordens kredsløb

![[Pasted image 20261116083521.png|477]]

### Anden ordens differentialligning inhomogen

Partikuler løsning:

$y_{p}(x)$

indsæt i DL

VS=HS=f(x)

Fuldstændig/general løsning.
![[Pasted image 20261123083057.png|285]]
hvor $y_{hom}(x)$ her er f(x)=0
og $y_{p}(x)$ her er f(x) ikke 0

Gæt på noget der ligner f(x)
![[Pasted image 20261123083303.png|360]]

Gæt $y_{p}(x)$ -> indsæt i DL -> HS = VS 
nej = nyt gæt
ja = $y_{p}(x)$ er en partikulær løsning

Specifik løsning, 2 randbetingelser ( )

i) $y(x_0) = \lambda_o$
ii) $\frac{dy(x)}{dx} = \lambda_1$

eksempel: 
$\frac{1}{2}\frac{d^2y}{dx^2} - \frac{1}{2}\frac{dy}{dx} - 3y = e^{2x}$

afh var: y(x)
uafh var: x
orden: 2
grad = 1 
lineær = ja
inhomogen/homogen = den er inhomogen
a = 1/2
b = -1/2
c = -3

Homogen løsning $y_h(x)$

1/2k-1/2k -3 = 0
k = 1/2k +- 5/2 , k = 3 og k = -2

gå op og kig i cases

case I
$D>0$: fuldstændig løsning $Y_h(x) = A e^{k_1 x} + B e^{k_2 x}$.
hvor $A$ og $B$ er reelle tal, $A, B \in \mathbb{R}$.

partikulær løsning:
f(x)= 1*e^2x
hvad gætter vi på?, kig i skema 
$y_p(x)= \alpha * e^{kx}$

$\frac{dy}{dx} = 2\alpha e^{2x}$

$\frac{d^2y_p}{dx^2} = \frac{d}{dx} \cdot \frac{d}{dx} y_p(x) = 4\alpha e^{2x}$

indsætter i VS:
$\frac{1}{2}(2*\alpha e^{2x}) - \frac{1}{2}(4*\alpha e^{2x}) - 3\alpha e^{2x}$
det giver
$-2\alpha e^{2x}$
HS:
$1*e^{2x}$

er VS = HS?
