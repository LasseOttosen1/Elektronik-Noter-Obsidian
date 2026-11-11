# Kapacitiv reaktans i højpas- og lavpasfiltre

Formlen for kapacitiv reaktans er den samme i begge tilfælde:

$X_C = \frac{1}{2\pi f C}$

Det er **placeringen** af kondensatoren i kredsløbet, der afgør, om det bliver et højpas eller lavpas.

---

## RC-lavpasfilter

Kondensatoren sidder **parallelt med udgangen** (i serie med signalvejen, udgangen tages over C):

```
Vin ──[ R ]──┬── Vout
             │
            === C
             │
            GND
```

**Udgangsspænding over kondensatoren:**

$V_{out} = V_{in} \cdot \frac{X_C}{\sqrt{R^2 + X_C^2}}$

**Grænsefrekvens (krydsfrekvens):**

$f_c = \frac{1}{2\pi R C}$

- Ved **lave frekvenser** ($f \ll f_c$): $X_C \gg R$ → kondensatoren "blokerer" ikke signalet mod jord, og $V_{out} \approx V_{in}$. **Signalet slipper igennem.**
- Ved **høje frekvenser** ($f \gg f_c$): $X_C \ll R$ → kondensatoren kortslutter signalet til jord, og $V_{out} \to 0$. **Signalet dæmpes.**

---

## RC-højpasfilter

Kondensatoren sidder **i serie med signalvejen** (udgangen tages over R):

```
Vin ──[ C ]──┬── Vout
             │
            [ R ]
             │
            GND
```

**Udgangsspænding over modstanden:**

$V_{out} = V_{in} \cdot \frac{R}{\sqrt{R^2 + X_C^2}}$

**Grænsefrekvens (samme formel):**

$f_c = \frac{1}{2\pi R C}$

- Ved **lave frekvenser** ($f \ll f_c$): $X_C \gg R$ → kondensatoren blokerer signalet i serie, og $V_{out} \to 0$. **Signalet dæmpes.**
- Ved **høje frekvenser** ($f \gg f_c$): $X_C \ll R$ → kondensatoren leder næsten uden modstand, og $V_{out} \approx V_{in}$. **Signalet slipper igennem.**

---

## Opsummering

|                      | Lavpas                              | Højpas                         |
| -------------------- | ----------------------------------- | ------------------------------ |
| Kondensatorplacering | Parallel med udgang                 | I serie med signal             |
| $X_C$ ved lav $f$    | Stor → signal slipper igennem       | Stor → signal blokeres         |
| $X_C$ ved høj $f$    | Lille → signal kortsluttes til jord | Lille → signal slipper igennem |
| Grænsefrekvens       | $f_c = \dfrac{1}{2\pi RC}$          | $f_c = \dfrac{1}{2\pi RC}$     |

Bemærk: Ved $f = f_c$ er $X_C = R$, og udgangen er $1/\sqrt{2} \approx 70{,}7\,\%$ af indgangen (dvs. $-3$ dB). Det er den samme betingelse for begge filtre — det er kun **topologien**, der bestemmer, hvilke frekvenser der kommer ud.