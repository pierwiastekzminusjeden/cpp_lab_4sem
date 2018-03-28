#include "Zoo.h"

Zoo::Zoo(const std::string name, int numberOfEnc): m_name(name), m_numberOfEnc(numberOfEnc){

}

Zoo::~Zoo(){
}

void Zoo::print() const{
    
    
}

Animal *& Zoo::insert(int pos, Animal * animal){
    m_enclosure[pos] = animal;
    return m_enclosure[pos];
}
    
Animal *& Zoo::insert(Animal * animal){
    return m_enclosure[0];
}
        
void Zoo::reorganize(int pos) const{

}

int Zoo::numOfAnimals() const{
    return m_numberOfAnimals;
}

Animal *& Zoo::remove(int index){

    return m_enclosure[index];
}
