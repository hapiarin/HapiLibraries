class example {
private:        //W private dajemy wszystkie inty,stringi oraz inne zmienne publiczne
  int red; //deklarujemy zmienna aby ustawic ja na publiczna
  int pin; //deklarujemy zmienna pin
public:         // W public deklarujemy tylko void'y oraz nazwy spoza void setup()
  example(int r);  //Deklarowanie nazwą na zewnatrz (spoza void'a np setup) robi sie bez void
  void Blink13(int czas); //Deklarujemy sobie void'a blink z zmienna czas           // deklarowanie funkcji/voida ktory ma byc w voidzie (np w setup) robi sie z void
};
