#include "Arduino.h"
#include "LibraryExample.h"

example::example(int r) { //tworzymy prywatna zmienna r.
    pin = r; //ustawiamy zmienna pin ktora byla wczesniej zdeklarowana na zmienna prywatna r (Ta zmienna prywatna nie jest dostepna w innym voidzie niz ten, to troche tak jak static class w javie :p)
    pinMode(r, OUTPUT); //pinmode standardowo :p
}

void example::Blink13(int czas) { //tworzymy zmienna czas aby wykorzystac ja w delay()
    digitalWrite(pin, HIGH);
    delay(czas);
    digitalWrite(pin, LOW);    //prosciutki kodzik 
    delay(czas);
}
