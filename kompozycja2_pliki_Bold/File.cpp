#include <iostream>
#include "File.h"

std::ostream & operator << ( std::ostream & strm, const File & file){
    strm <<file. m_name << std::endl;
    // file.print(file.getIndent());
    return strm;
}


File::File(const std::string name){
    m_name = name;
    m_indent = 0;
}

File::~File(){}

const File * File::get(std::string toSearch ) const{
    if(m_name == toSearch)
        return this;
    
}

// void File::print(const int indent) const{
//     for(int i = 0; i < indent ; i++){
//         std::cout << " ";
//     }
//     // std::cout << m_name << std::endl;
// }

