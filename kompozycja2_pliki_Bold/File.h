#pragma once
#include <string>
#include <iostream>


class File{
    friend std::ostream & operator << ( std::ostream & strm, const File & file);
public:
    File(const std::string name);

    virtual ~File();

    virtual const File * get(std::string toSearch ) const;

    // virtual void print(const int indent) const;
    
    int getIndent() const{return m_indent;}

    std::string getName(){return m_name;}

protected:
    std::string m_name;
    int m_indent;
};
