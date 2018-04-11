#pragma once

class Mebel{

public:
    Mebel(int sz, int wys, int dl): m_sz(sz), m_wys(wys), m_dl(dl){};

    ~Mebel();

    friend std::ostream & operator<<(std::ostream &strm, const Mebel &mebel);

protected:
    int m_sz;
    int m_wys;
    int m_dl;
};
