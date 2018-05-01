#pragma once
#include <stdexcept>

//Implementacja klasy wyjatku dziedziczacej po ogolniejszym wyjatku runtime_error
class Calc_error: public std::runtime_error{

public:
//konstruktor 4-argumentowy. Przyjmuje poziom gdzie wystapil wyjatek, krotki opis wyjatku ktory wystapil,
//plik w ktorym wyjatek wystapil oraz numer jego linii.
    Calc_error(std::runtime_error * err, const std::string &name, const std::string & file, int line);
//destruktor
    ~Calc_error() throw();
//przeciazana metoda wyjatku what(). Wypisuje opis wyjatku. Zwraca opis poprzendiego wyjatku.
    void what();
//Funkcja trzymajaca wyjatki. Znajduje sie wniej blok try catch odpowiadajacy za obsloge wyjatkow
//wystepujacych w programie
    static void handler();

private:
//wskaznik na poprzedni wyjatek
    std::runtime_error * m_err;
//opis wyjatku
    std::string m_name;
//plik w kotrym wystapil wyjatek
    std::string m_file;
//numer linii w pliku gdzie wystapil wyjatek
    int m_line;
};
