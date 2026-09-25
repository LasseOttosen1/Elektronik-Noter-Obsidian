
Kode skrevet af  MIG MIG MIG; men med noter fra Deepseek fordi jeg gad ikke selv skrive dem, koden gennemgår de forskellige punkter som findes her, og det gør det hele og virker tak mange tak. 
![[Pasted image 20260922125419.png|488]]
det hele ligger også under lab 5_2 i onedrive
```cpp fold
;=========================================================
; STACK POINTER INITIERING
;=========================================================
   LDI  R16,HIGH(RAMEND)   ; Læg den høje byte af RAMEND ind i R16
   OUT  SPH,R16            ; Skriv R16 til Stack Pointer High
   LDI  R16,LOW(RAMEND)    ; Læg den lave byte af RAMEND ind i R16
   OUT  SPL,R16            ; Skriv R16 til Stack Pointer Low
                           ; (Stack Pointer peger nu på toppen af RAM)

;=========================================================
; PORT KONFIGURATION
;=========================================================
   LDI  R16,0x00           ; Læg 0x00 i R16
   OUT  DDRA,R16           ; Skriv 0x00 til DDRA -> alle PA-ben er indgange

   SER  R16                ; Sæt alle bits i R16 til 1 (0xFF)
   OUT  DDRB,R16           ; Skriv 0xFF til DDRB -> alle PB-ben er udgange

   CLR  R16                ; Sæt R16 til 0
   OUT  PINB,R16           ; Skriv 0 til PINB (toggler ikke noget, men "nulstiller" PIN-registeret)

;=========================================================
; MAIN LOOP
;=========================================================
MAIN:
   IN   R20, PINA          ; Læs alle PA-ben ind i R20
   CPI  R20, 0xFF          ; Sammenlign R20 med 0xFF (alle trykket ned?)
   BREQ MAIN               ; Hvis R20 == 0xFF, hop tilbage til MAIN (vent på tryk)

;--- Knap 7 (PA7) -> Increment R17 ---
   SBIS PINA, 7            ; Hvis PA7 er 0 (trykket), spring næste linje over
   INC  R17                ; R17 = R17 + 1
   OUT  PORTB,R17          ; Skriv R17 til PORTB
                           ; (NB: OUT kører ALTID, også når der ikke trykkes,
                           ;  fordi den ikke er sprunget over)

;--- Knap 6 (PA6) -> Decrement R17 ---
   SBIS PINA, 6            ; Hvis PA6 er 0 (trykket), læs næste linje over
   DEC  R17                ; R17 = R17 - 1
   OUT  PORTB,R17          ; Skriv R17 til PORTB

;--- Knap 5 (PA5) -> Swap nibbles i R17 ---
   SBIS PINA, 5            ; Hvis PA5 er 0 (trykket), læs næste linje over
   SWAP R17                ; Byt høje og lave nibble i R17
   OUT  PORTB,R17          ; Skriv R17 til PORTB

;--- Knap 4 (PA4) -> Komplementér R17 ---
   SBIS PINA, 4            ; Hvis PA4 er 0 (trykket), læs næste linje over
   COM  R17                ; Invertér alle bits i R17
   OUT  PORTB,R17          ; Skriv R17 til PORTB

;--- Knap 3 (PA3) -> Kald DIV8 ---
   SBIS PINA, 3            ; Hvis PA3 er 0 (trykket), læs næste linje over
   CALL DIV8               ; Kald DIV8 (divider R17 med 8)

;--- Knap 2 (PA2) -> Kald DIV7 ---
   SBIS PINA, 2            ; Hvis PA2 er 0 (trykket), læs næste linje over
   CALL DIV7               ; Kald DIV7 (divider R17 med 7)

;--- Knap 1 (PA1) -> Maskér bits ---
   SBIS PINA, 1            ; Hvis PA1 er 0 (trykket), læs næste linje over
   ANDI R17,0b01111110     ; Behold alle bits undtagen bit 0 og bit 7 (dem nulstilles)
   OUT  PORTB,R17          ; Skriv R17 til PORTB

;--- Knap 0 (PA0) -> Sæt bits ---
   SBIS PINA, 0            ; Hvis PA0 er 0 (trykket), læs næste linje over
   ORI  R17,0b10000001     ; Sæt bit 0 og bit 7 til 1
   OUT  PORTB,R17          ; Skriv R17 til PORTB

;--- Forsinkelse og loop ---
   CALL DELAY              ; Kald DELAY (vent lidt)
   JMP  MAIN               ; Hop tilbage til MAIN

;=========================================================
; DELAY - tæller ned fra 255*255*20 iterationer
;=========================================================
DELAY:
   LDI  R21,255            ; R21 = 255 (indre tæller)
   LDI  R22,255            ; R22 = 255 (midterste tæller)
   LDI  R23,20             ; R23 = 20  (ydre tæller)
AGAIN:
   DEC  R21                ; R21 = R21 - 1
   BRNE AGAIN              ; Hvis R21 != 0, hop til AGAIN
   DEC  R22                ; R22 = R22 - 1
   BRNE AGAIN              ; Hvis R22 != 0, hop til AGAIN
   DEC  R23                ; R23 = R23 - 1
   BRNE AGAIN              ; Hvis R23 != 0, hop til AGAIN
   RET                     ; Returnér fra DELAY

;=========================================================
; DIV8 - divider R17 med 8 (højreskift 3 gange)
;=========================================================
DIV8:
   LSR  R17                ; Logisk højreskift af R17 (÷2)
   LSR  R17                ; Logisk højreskift af R17 (÷4)
   LSR  R17                ; Logisk højreskift af R17 (÷8)
   OUT  PORTB,R17          ; Skriv resultatet til PORTB
   RET                     ; Returnér

;=========================================================
; DIV7 - divider R17 med 7 (heltalsdivision)
;=========================================================
DIV7:
   LDI  R25, 7             ; R25 = 7 (divisor)
   CLR  R26                ; R26 = 0 (kvotient-tæller)

L1:
   INC  R26                ; R26 = R26 + 1
   SUB  R17, R25           ; R17 = R17 - 7 (sætter Carry hvis lån)
   BRCC L1                 ; Hvis Carry er 0 (R17 >= 7), hop til L1

   DEC  R26                ; R26 = R26 - 1 (ret op for den sidste overskydende INC)
   MOV  R17,R26            ; R17 = R26 (kvotienten kopieres til R17)
   OUT  PORTB,R17          ; Skriv R17 (kvotienten) til PORTB
   RET                     ; Returnér
```
min O.G code, men uden kommentare.
```cpp fold
   LDI  R16,HIGH(RAMEND)  ;Initier Stack Pointer
   OUT  SPH,R16
   LDI  R16,LOW(RAMEND)
   OUT  SPL,R16			  ;Initier Stack Pointer
   LDI  R16,0x00
   OUT  DDRA,R16          ;PA er indgange
   SER  R16
   OUT  DDRB,R16          ;PB benene er udgange 

   CLR R16 //sætter nuller på R16
   OUT PINB,R16 //sætter nuller på pin 16

	MAIN:

		 IN  R20, PINA   //Kigger på alle pin A altså knapperne, smider data over i R20 
			CPI  R20, 0xFF //sammenligner PinA (r20) med 11111111, hvis de er ens hop tilbage, hvis de ikke er, så hop vidre i programmet
			BREQ MAIN
		
		SBIS PINA, 7 //trykker på knap 7? gær funktionen under, ellers hop over. 
	INC R17
	OUT PORTB,R17
			
		SBIS PINA, 6  //trykker på knap 7? gær funktionen under, ellers hop over. 
	DEC R17
	OUT PORTB,R17

		SBIS PINA, 5  //trykker på knap 7? gær funktionen under, ellers hop over. 
	SWAP R17
	OUT PORTB,R17

	    SBIS PINA, 4  //trykker på knap 7? gær funktionen under, ellers hop over. 
	COM R17
	OUT PORTB,R17

		SBIS PINA, 3 //trykker på knap 7? gær funktionen under, ellers hop over. 
	CALL DIV8

		SBIS PINA, 2
	CALL DIV7

		SBIS PINA, 1
	 ANDI R17,0b01111110
	 OUT PORTB,R17

		SBIS PINA, 0
	 ORI  R17,0b10000001
	 OUT PORTB,R17


	CALL DELAY

	JMP MAIN

		
DELAY:
   LDI  R21,255
   LDI  R22,255
   LDI  R23,20
AGAIN:
   DEC  R21
   BRNE AGAIN
   DEC  R22
   BRNE AGAIN
   DEC  R23
   BRNE AGAIN
   RET	

 DIV8:
	LSR R17
	LSR R17
	LSR R17
	OUT PORTB,R17
	RET


DIV7:
    LDI  R25, 7        ; divisor
    CLR  R26           ; quotient counter = 0

L1:
    INC  R26
    SUB  R17, R25      ; R17 -= 7, sets C on borrow
    BRCC L1            ; loop while R17 >= 7

    DEC  R26           ; undo the extra increment
    MOV  R17,R26    ; restore remainder into R17

    OUT  PORTB, R17    ; output QUOTIENT (change to R17 for remainder)
    RET
```