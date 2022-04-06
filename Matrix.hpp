
#ifndef EX3_PARTA_MATRIX_H
#define EX3_PARTA_MATRIX_H

#endif //EX3_PARTA_MATRIX_H

#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>
#include <vector>

namespace zich{
    class Matrix{
    private:
        std::vector<std::vector<double>> _mat;

    public:
        Matrix(const std::vector<double> &identity, int row, int col );
        ~Matrix();

        friend Matrix operator + (const Matrix &a, const Matrix &b);
        friend void operator += (const Matrix &a,const Matrix &b);
        friend Matrix operator + (const Matrix &a, const Matrix &b);

        friend Matrix operator - (const Matrix &a, const Matrix &b);
        friend void operator -= (const Matrix &a, const Matrix &b);
        friend Matrix operator - (const Matrix &a, const Matrix &b);

        friend bool operator > (const Matrix &a, const Matrix &b);
        friend bool operator < (const Matrix &a, const Matrix &b);
        friend bool operator >= (const Matrix &a, const Matrix &b);
        friend bool operator <= (const Matrix &a, const Matrix &b);
        friend bool operator == (const Matrix &a, const Matrix &b);
        friend bool operator != (const Matrix &a, const Matrix &b);

        friend void operator ++ (const Matrix &a ); //prefix increment
        friend void operator -- (const Matrix &a );//prefix decrement
        friend void operator ++ (const Matrix &a, int ); //postfix increment
        friend void operator -- (const Matrix &a, int ); //postfix decrement

        friend Matrix operator * (const Matrix &a, const Matrix &b);
        friend Matrix operator * (const Matrix &a, double k);
        friend Matrix operator * (double k , const Matrix &a);

        friend void operator *= (double k, const Matrix &a);
        friend void operator *= (const Matrix &a, double k);
        friend void operator *= (const Matrix &a, const Matrix &b);

        friend Matrix operator - (Matrix &a);
        friend Matrix operator + (Matrix &a);

        friend std::ostream& operator << (std::ostream &out,const Matrix &a);
        friend std::istream& operator>> (std::istream& is, const Matrix &a);

    };
}

