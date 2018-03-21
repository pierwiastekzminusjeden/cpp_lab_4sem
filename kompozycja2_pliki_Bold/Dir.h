#pragma once
#include "File.h"


class Dir: public File{
    // friend std::ostream & operator<<(std::ostream & strm, const Dir & dir);
public:
    Dir(const std::string name);

    ~Dir();

    Dir * operator+=(File * toadd);

    const File * get(std::string toSearch ) const;

private:
    File * m_files[10];
    int m_iter;
};
