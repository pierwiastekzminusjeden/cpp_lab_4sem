#pragma once
#include <iostream>

#include "Pomieszczenie.h"



template <void (Pomieszczenie::*wsk)() const> void Lokaj(const Pomieszczenie &pomieszczenie){
	std::cout<<"ppomieszczenie jest zamkniete"<<std::endl;
}

template <void (Pomieszczenie::*wsk)() const> void Lokaj(Pomieszczenie &pomieszczenie){
	(pomieszczenie.*wsk)();
}

template <int i> void Lokaj(Pomieszczenie pomieszczenie){
	std::cout<<"Nic nie robie"<<std::endl;
}
