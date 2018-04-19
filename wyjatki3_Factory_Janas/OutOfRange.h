#pragma once
#include "Factory.h"
//Klasa reprezentujaca wyjatek
class Factory;

//Ze wzgledu na krwotok z brody nie zdazylem naprawic i napisac zgodnie ze sztuka.
class OutOfRange{
public:
//przeladowany operator << pozwalajacy na zwrocenie informacji na temat wyjatku (wartosc, zakres, nazwa obiektu)
    friend std::ostream & operator<<(std::ostream & strm, const OutOfRange & exception);
//kostruktor przyjmujacy podstawowe parametry przy ktorych powstal wyjatek
    OutOfRange(const std::string name, double value, double start, double end, Factory *factory);
//destruktor
    ~OutOfRange();
//Metoda pozwalajaca na zwolenienie pamieci zajmowanej przez wszystkie obiekty wyprodukowane przez klase Facotyr
    void CleanFactory();

private:
//podstawowe wartosci, przy ktorych powstal wyjatek, inicjalizowane w konstruktorze
    std::string m_excName;
    double m_validValue;
    double m_startRange, m_endRange;
//Wskaznik na fabryke z ktorej wyrzucono wyjatek
    Factory *m_factory;
};
