VI lavede keybord og lysdæmperen igen, men nu skrevet i C. Her er koden 


```c keybord kode skrevet i c
/*
 * keyboard C.c
 *
 * Created: 29-09-2026 10:15:12
 * Author : lasse
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    DDRB= 0xFF;
	DDRA= 0x00;
	PORTB= 0;
    while (1) 
    {
		if ((PINA & 0b00000001) == 0){
		PORTB = 255;
		_delay_us(956);
		PORTB = 0;
		_delay_us(956);
		PORTB = ~PORTB;
			}
		else if ((PINA & 0b00000010) == 0){
		PORTB = 255;
		_delay_us(852);
		PORTB = 0;
		_delay_us(852);
		PORTB = ~PORTB;
		}
		else if ((PINA & 0b00000100) == 0){
			PORTB = 255;
			_delay_us(760);
			PORTB = 0;
			_delay_us(760);
			PORTB = ~PORTB;
		}
		else if ((PINA & 0b00001000) == 0){
			PORTB = 255;
			_delay_us(716);
			PORTB = 0;
			_delay_us(716);
			PORTB = ~PORTB;
		}
		else if ((PINA & 0b00010000) == 0){
			PORTB = 255;
			_delay_us(640);
			PORTB = 0;
			_delay_us(640);
			PORTB = ~PORTB;
		}
		else if ((PINA & 0b00100000) == 0){
			PORTB = 255;
			_delay_us(568);
			PORTB = 0;
			_delay_us(568);
			PORTB = ~PORTB;
		}
		else if ((PINA & 0b01000000) == 0){
			PORTB = 255;
			_delay_us(508);
			PORTB = 0;
			_delay_us(508);
			PORTB = ~PORTB;
		}
		else if ((PINA & 0b10000000) == 0){
			PORTB = 255;
			_delay_us(480);
			PORTB = 0;
			_delay_us(480);
			PORTB = ~PORTB;
		}
		
		else {
		     PORTB=0;
		}
	}
}
	



```

```c Styring af lysdioder i c {fold}
/*
 * Styring af lysdiode.c
 *
 * Created: 29-09-2026 10:57:56
 * Author : lasse
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
DDRB= 0xFF;
DDRA= 0x00;
PORTB= 0;
    while (1) 
    {
		if ((PINA & 0b00000001) == 0){
			PORTB =~PORTB;
			_delay_ms(5);
			PORTB =~PORTB;
			_delay_ms(95);
			
		}
		
		else if ((PINA & 0b00000010) == 0){
			PORTB =~PORTB;
			_delay_ms(95);
			PORTB =~PORTB;
			_delay_ms(5);
			
		}
		
		else if ((PINA & 0b00000100) == 0){
			PORTB =~PORTB;
			_delay_us(50);
			PORTB =~PORTB;
			_delay_us(950);
			
		}
		
		else if ((PINA & 0b00001000) == 0){
			PORTB =~PORTB;
			_delay_us(950);
			PORTB =~PORTB;
			_delay_us(50);
			
		}
		else {
			PORTB=0;
    }
	}
}


```
