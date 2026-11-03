
```c {fold}
#include <avr/io.h>
#include "led.h"
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>

volatile unsigned long antaloverflows;


void initinterrupts(){ 
	EIMSK = 0b00001100; 
	EICRA = 0b11100000;
	sei();
}

void initTimer1(){
	TCCR1A = 0b00000000; //vælger type timeren er i sammen med TCCR1B, og sætter waveform A- B- og C- til normal port operation. 
	TCCR1B = 0b00001100; //vælger typen timeren er i sammen med TCCR1A, og sætter prescaler til 256
	OCR1A  = 7811; // sætter en vrædi for ctc så den "match 4 gange i sekundet
	TIMSK1 = 0b00000010; //gør sådan at når der laves et match kan det trigger et interrupt
	
}
void initTimer0(){
	TCCR0A = 0b00000000; // initiater den i normaal mode
	TCCR0B = 0b00000001; //sætter prescaler til 1 
	TIMSK0 = 0b00000001; //gør sådan at når der er overflow kan der laves et interrupt
}

//led 2 er på rising edge, hvilket vil sige at den tænder på trykket til når knappen går ned
ISR (INT2_vect){
	toggleLED(2);
	
}
// led 3 er på falling edge, hvilet vil sige at den tænder når man slipper knappen. 
ISR (INT3_vect){
	toggleLED(3);
	
}


ISR (TIMER0_OVF_vect){ // venter på at der er et intterupt ved at der sker overflow i timeren.
	antaloverflows++; 
	if (antaloverflows>=62500){
		toggleLED(6);
		antaloverflows=0;
	}
}

ISR (TIMER1_COMPA_vect){ //kigger efter om
	
		toggleLED(5);
	
	
}

int main(void)
{
	initinterrupts();
	initLEDport();
	initTimer0();
	initTimer1();
	 
	
    /* Replace with your application code */
    while (1) 
    {
		turnOnLED(7);
		_delay_ms(1000);
		turnOffLED(7);
		_delay_ms(1000);
	
		
		
    }
}


```
koden til lab 10 der er lavet 2 beregninger for at finde ud af hvor mange gange timer 0 skal overflow for at det giver en tid på 1 sekund 
![[Pasted image 20261103161458.png]]
og der er også en beregning for hvad man skal regne ud for at finde hvad OCR1A skal sættes til så timer 1 A, passer med at have "match" hvert 0,25 sekund eller 4 hz
![[Pasted image 20261103161604.png]]

###### kode hvis det forsvinder 
#include <avr/io.h>
#include "led.h"
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>

volatile unsigned long antaloverflows;


void initinterrupts(){ 
	EIMSK = 0b00001100; 
	EICRA = 0b11100000;
	sei();
}

void initTimer1(){
	TCCR1A = 0b00000000; //vælger type timeren er i sammen med TCCR1B, og sætter waveform A- B- og C- til normal port operation. 
	TCCR1B = 0b00001100; //vælger typen timeren er i sammen med TCCR1A, og sætter prescaler til 256
	OCR1A  = 7811; // sætter en vrædi for ctc så den "match 4 gange i sekundet
	TIMSK1 = 0b00000010; //gør sådan at når der laves et match kan det trigger et interrupt
	
}
void initTimer0(){
	TCCR0A = 0b00000000; // initiater den i normaal mode
	TCCR0B = 0b00000001; //sætter prescaler til 1 
	TIMSK0 = 0b00000001; //gør sådan at når der er overflow kan der laves et interrupt
}

//led 2 er på rising edge, hvilket vil sige at den tænder på trykket til når knappen går ned
ISR (INT2_vect){
	toggleLED(2);
	
}
// led 3 er på falling edge, hvilet vil sige at den tænder når man slipper knappen. 
ISR (INT3_vect){
	toggleLED(3);
	
}


ISR (TIMER0_OVF_vect){ // venter på at der er et intterupt ved at der sker overflow i timeren.
	antaloverflows++; 
	if (antaloverflows>=62500){
		toggleLED(6);
		antaloverflows=0;
	}
}

ISR (TIMER1_COMPA_vect){ //kigger efter om
	
		toggleLED(5);
	
	
}

int main(void)
{
	initinterrupts();
	initLEDport();
	initTimer0();
	initTimer1();
	 
	
    /* Replace with your application code */
    while (1) 
    {
		turnOnLED(7);
		_delay_ms(1000);
		turnOffLED(7);
		_delay_ms(1000);
	
		
		
    }
}

