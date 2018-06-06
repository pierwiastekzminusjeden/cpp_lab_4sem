#pragma once


template <typename T, int row, int col>
class Matrix{

public:

    friend std::ostream & operator<<(std::ostream &strm, Matrix<T, row, col> & mat );

    Matrix();

    ~Matrix();

    void reset(T val);

    template<int r, int c>
    T & at();

    template<typename TT>
    void add(const Matrix<TT, row, col> & mat);


private:

    T **tab;
 
};
