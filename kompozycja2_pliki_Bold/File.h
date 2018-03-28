#pragma once
#include <string>
#include <iostream>


class File{
    friend std::ostream & operator << ( std::ostream & strm, const File & file);
public:
    File(const std::string name);

    virtual ~File();

    virtual std::ostream & print(std::ostream &strm, int indent) const;
    
    std::string getName(){return m_name;}

protected:
    std::string m_name;
};
