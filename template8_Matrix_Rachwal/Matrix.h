#pragma once
#include <iostream>
#include <string>


template <typename T, int row, int col>
class Matrix{

public:

    friend std::ostream & operator<<(std::ostream &strm, Matrix<T, row, col> & mat ){
        for(int i = 0; i < col; i++){
            for(int j = 0; j < row; j++){
                strm << mat.get(i,j) << " ";
            }
            strm << "\n";
        }
        return strm;
    }

    Matrix();

    ~Matrix();

    void reset(T val);

    template<int r, int c>
    T & at();

    template<typename TT>
    
    void add(Matrix<TT, row, col> & mat);

    T get(int r, int c) const{ return arr[r][c]; }

private:

    T **arr;
 
};

/////////////////////////////////////////////////////////
//ogarnac to
// template<typename T, int row, int col>
// std::ostream & operator<<(std::ostream &strm, Matrix<T, row, col> & mat ){
//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             strm << mat.get(i,j) << " ";
//         }
//         strm << "\n";
//     }
//     return strm;
// }

template <typename T, int row, int col>
Matrix<T, row, col>::Matrix(){
  
    arr = new T* [col];
    for(int i = 0; i < col; i++)
        arr[i] = new T[row];
}


template <typename T, int row, int col>
Matrix<T, row, col>::~Matrix(){

    for(int i = 0; i < col; i++)
        delete [] arr[i];
    delete *arr;
}


template <typename T, int row, int col>
void Matrix<T, row, col>::reset(T val){
    for(int i = 0; i < col; i++)
        for(int j = 0; j < row; j++){
            arr[i][j] = val;
        }
}

template<typename T, int row, int col>
template<int r, int c>
T & Matrix<T, row, col>::at(){
    return arr[c][r];
}

template<typename T, int row, int col>
template<typename TT>
void Matrix<T, row, col>::add(Matrix<TT, row, col> & mat){
     for(int i = 0; i < col; i++)
        for(int j = 0; j < row; j++){
            arr[i][j] += T(mat.get(i,j));           //poprawić na dynamic cast z .at<>
        }
}
