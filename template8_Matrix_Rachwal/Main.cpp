// Nazwa pliku wykonywalnego: Matrix

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Proszę napisać szablon klasy reprezentujacej macierz 2D. 
// Charakterystyczne jest to ze rozmiary macierzy zadawane sa w czasie kompilacji.
// Tym samym Matrix<double, 2, 2> i Matrix<double, 3, 3> sa roznymi typami.
// Dostep do elemetow macierzy realizowany jest poprzez metode szabolonowa at
// ktorej argumentami sa indeksy macierzy.
// Tym sposobem moznaby w czasie kompilacji spawdzic czy nie wychodzi sie poza zakres 
// tablicy i wygenerowac blad kompilacji.
// (Nie trzeba implementowac samego sprawdzenia)
// Ciekawa jest sytuacja z operacja add. Pozwala ona przyjac argument innego typu (tu tablica int) 
// i dodac do tablicy double.
// Inaczej mowiac, tablice o tym samym rozmiarze i roznym typie przechowywanym mozna dodawac.
// UWAGA: Brawa za przeniesienie wszystkich implementacji metod poza klase.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty 
// (miec czytelny i dobrze napisany kod). 

// Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy
// wgrac do UPEL.

#include <iostream>
#include "Matrix.h"


int main() {

  Matrix<double, 2, 3> a;
  a.reset(5.1); // ustawia wszystkie wartosci na 5.1
  Matrix<double, 3, 3> b;
  
  // a.add(b); // to sie niepowinno kompilowac bo rozmiary a i b sa rozne i byloby to dzialanie niejednoznaczne 

  // stary trick, dostep do zapisu i odczytu, mozliwy gdy zwrocimy ?
  b.at<1,1>() = 2.5;
  b.at<1,2>() = 3.1;

  // pierwsza linijka wyniku
  std::cout << b.at<1,1>() << " " << a.at<0,2>()  << std::endl;
  
  Matrix<int, 3, 3> c;
  c.at<2,0>() = 7;
  b.add(c); // a to sie kompiluje bo wymiary sa takie same, mimo ze typy sa rozne
  std::cout << b;
}
/* wynik
2.5 5.1
 0 0 7
 0 2.5 0
 0 3.1 0
 */
