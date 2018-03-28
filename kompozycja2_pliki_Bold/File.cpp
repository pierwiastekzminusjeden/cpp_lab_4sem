#include <iostream>
#include "File.h"

std::ostream & operator << ( std::ostream & strm, const File & file){
    file.print(strm, 2);
    strm << "\n";
    return strm;    
}

File::File(const std::string name){
    m_name = name;
}

File::~File(){
}

std::ostream & File::print(std::ostream &strm, int indent) const{
    strm << m_name;
    return strm;
}

