#pragma once
//Klasa pomocnicza zliczajaca poziomy zagniezdzenia programu na jakich sie znajdujemy
class LicznikPoziomow{

public:
//glosny konstruktor - wypisuje poziom zagniezdzenia wchodzimy
    LicznikPoziomow();
//glosny destruktor, wypisuje poziom zagniezdzenia na jaki wychodzimy
    ~LicznikPoziomow();
//statyczny licznik poziomow zagniezdzenia
    static int m_counter;

};
