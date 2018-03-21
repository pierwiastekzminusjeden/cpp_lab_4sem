#pragma once
#include <string>

class Dir: public File{

public:
    Dir(const std::string name);

    ~Dir();

    Dir & operator+=(File & toadd);

    std::string

private:
    File * m_files[10];
};
