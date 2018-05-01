// Obsluga wyjatkow
//
// Tematem zadanie jest napisanie klasy wyjatkow i funkcjanlonosci do ich obslugi.
//
// 
// Kompilowac z opcja -Wall -g do pliku wyk. o nazwie "exc".
// UWAGA: Prosze nie zmieniac nazwy tego pliku (ma byc exc.C)
// ani nie kopiowac do innego uwuwajac komentarze (zmienia sie wtedy numery linii w makrze __LINE__).
//
// UWAGA: Prosze zauwazyc ze zwykle nie wyrzucamy wyjatku ktory znajduje sie na strecie. Tutaj tak sie dzieje. Nie bez przyczyny.
// Wyjatki nalezy olozyc w "lancuszek" przyczynowy i na koncu w funkcji obslugujacej wypisac w odpowiedniej kolejnosci.
// 
 
#include <iostream>
#include "myerrors.h"
#include "myerrors.h"
using namespace std;
 
 
struct m {
  static void krok1() {
    // ... jakis tam program
    std::cout << "Wykonuje krok 1" << std::endl;
    throw new std::runtime_error("Bardzo powazny problem w 1");
  }
 
  static void krok2() {
    try {
      std::cout << "Wykonuje krok 2" << std::endl;
      m::krok1();
    } catch (const std::runtime_error* err) {
      throw new myerrors::calc_error(err, "wyjatek z step2", __FILE__, __LINE__);
    }  
  }
     
  static void krok3() {
    try {
      std::cout << "Wykonuje krok 3" << std::endl;
      krok2();
    } catch (const std::runtime_error* err) {
      throw new myerrors::calc_error(err, "wyjatek z step3", __FILE__, __LINE__);
    }  
  }
   
  static void moje_obliczenia(int arg) {
    try {
      std::cout << "Wykonuje " << __FUNCTION__ << std::endl;
      krok3();
    } catch (const std::runtime_error* err) {
      throw new myerrors::calc_error(err, "moje_obliczenia", __FILE__, __LINE__);
    } 
  }
};
 
 
 
 
int main(int argc, char** argv) {
  try {
    m::moje_obliczenia(1); // wyrzuca wyjatek typu myerrors::calc_error
    throw new std::runtime_error("koniec"); // tu widac co rzucamy
  } catch (...) {
     
    myerrors::handler();
  }
}
/* wynik dzialania
Wykonuje moje_obliczenia
Wykonuje krok 3
Wykonuje krok 2
Wykonuje krok 1
Wyjatek w: moje_obliczenia [w pliku: exc.C w lini: 50] 
z powodu : wyjatek z step3 [w pliku: exc.C w lini: 41] 
z powodu : wyjatek z step2 [w pliku: exc.C w lini: 32] 
z powodu : Bardzo powazny problem w 1
 
*/