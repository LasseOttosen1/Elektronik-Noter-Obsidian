

## Iteration

**Hvad er relationen mellem et for-loop og et while-loop?**
Et `for`-loop og et `while`-loop er i princippet ækvivalente – alt hvad du kan skrive med et `for`-loop, kan omskrives til et `while`-loop og omvendt. Et `for`-loop er blot en mere kompakt syntaks, hvor initialisering, betingelse og opdatering står samlet ét sted. Et `while`-loop bruges typisk, når antallet af iterationer ikke er kendt på forhånd, mens et `for`-loop typisk bruges, når man itererer et bestemt antal gange eller over en samling.

**Hvornår bruger man et for-loop?**
Man bruger et `for`-loop, når man på forhånd ved, hvor mange gange man skal iterere, eller når man itererer over en sekvens (fx et array, en string eller en container). Det er også velegnet, når man har en tæller, der skal initialiseres, testes og opdateres.

---

## Enumeration

**Hvad er en enum?**
En `enum` (enumeration) er en brugerdefineret datatype, der består af et sæt navngivne heltalskonstanter. Den bruges til at give meningsfulde navne til en fast mængde værdier, fx `enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };`. Internt repræsenteres værdierne som heltal (typisk startende fra 0).

**Hvornår bruger man en enum? Og hvilke krav er der?**
Man bruger en `enum`, når man har en fast, afgrænset mængde af mulige værdier, der hører sammen – fx ugedage, farver, tilstande i en state machine eller statuskoder. Det gør koden mere læsbar og typesikker sammenlignet med at bruge rå heltal eller strings.

Krav/forhold:
- Værdierne skal være kendt på kompileringstidspunktet.
- Værdierne er konstanter og kan ikke ændres under kørsel.
- Alle enumeratorer skal have unikke navne inden for samme scope.
- I C++ kan en `enum class` bruges for at undgå navnekollisioner og få stærkere typesikkerhed.

---

## Selection

**Hvad er relationen mellem en if-else-if...-statement og en switch-statement?**
De er i høj grad ækvivalente – en `switch` kan ofte omskrives til en kæde af `if-else-if`, og omvendt. En `switch` er dog kun anvendelig, når man sammenligner én værdi mod flere faste konstanter, mens `if-else-if` kan håndtere vilkårlige betingelser (fx intervaller, sammensatte logiske udtryk).

**Hvornår bruger man en switch-statement? Og hvilke krav er der?**
Man bruger en `switch`, når man skal vælge mellem flere faste, diskrete værdier af samme udtryk – det giver ofte mere læsbar og overskuelig kode end en lang `if-else-if`-kæde.

Krav:
- Udtrykket i `switch` skal være af en integral type (heltal, char, enum) – ikke fx `double` eller `string` (i standard C++).
- `case`-labels skal være konstante udtryk og unikke.
- Man bør afslutte hvert `case` med `break` (eller `return`), medmindre man bevidst ønsker fall-through.
- En `default`-case er valgfri, men anbefales som sikkerhed.

---

## String

**Hvilke er de mest relevante funktioner i `<string>`-headeren?**
`<string>` indeholder klassen `std::string` og en række nyttige medlemsfunktioner og ikke-medlemsfunktioner. De mest relevante er:

**Medlemsfunktioner:**
- `size()` / `length()` – antal tegn
- `empty()` – om strengen er tom
- `clear()` – tømmer strengen
- `substr(pos, len)` – udtrækker en delstreng
- `find(str)` / `rfind(str)` – søger efter en delstreng
- `append(str)` / `push_back(c)` – tilføjer indhold
- `insert(pos, str)` – indsætter
- `erase(pos, len)` – sletter
- `replace(pos, len, str)` – erstatter
- `compare(str)` – sammenligner
- `c_str()` – returnerer en C-style string (`const char*`)
- `at(i)` / `operator[]` – adgang til enkelttegn

**Ikke-medlemsfunktioner:**
- `std::getline(is, str)` – læser en hel linje
- `std::stoi`, `std::stod`, `std::stof` – konverterer string til tal
- `std::to_string(...)` – konverterer tal til string
- `operator+` – sammensætter strings
- `operator==`, `!=`, `<`, `>` – sammenligning