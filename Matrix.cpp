#include <iostream>
#include "Matrix.hpp"
#include <algorithm>
#include <string>
#include <stdexcept>
#include <vector>

namespace zich {
    //constructor
    Matrix::Matrix(const std::vector<double> &identity,int row,int col) {

    }
    //destructor
    Matrix::~Matrix(){}


    Matrix operator + (const Matrix &a,const Matrix &b) {
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;

    }
    void operator += (const Matrix &a,const Matrix &b) {

    }

    Matrix operator + (const Matrix &a){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }
    Matrix operator - (const Matrix &a, const Matrix &b){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }
    void operator -= (const Matrix &a,const Matrix &b){

    }
    Matrix operator - (const Matrix &a){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }
    bool operator > (const Matrix &a , const Matrix &b){
        return false;
    }
    bool operator < (const Matrix &a , const Matrix &b){
        return false;
    }
    bool operator >= (const Matrix &a , const Matrix &b) {
        return false;
    }
    bool operator <= (const Matrix &a , const Matrix &b) {
        return false;
    }
    bool operator == (const Matrix &a , const Matrix &b) {
        return false;
    }
    bool operator != (const Matrix &a , const Matrix &b) {
        return false;
    }
    void operator ++ (const Matrix &a) {

    }
    void operator -- (const Matrix &a) {

    }
    void operator ++ (const Matrix &a, int ) {

    }
    void operator -- (const Matrix &a, int ) {

    }

    Matrix operator * (const Matrix &a, const Matrix &b) {
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }
    Matrix operator * (const Matrix &a,double k){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }
    Matrix operator * (double k,const Matrix &a){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }

    void operator *= (const Matrix &a, double k){

    }

    void operator *= (double k, const Matrix &a){

    }
    void operator *= (const Matrix &a,const Matrix &b){

    }

    Matrix operator - (Matrix &a){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }
    Matrix operator + (Matrix &a){
        std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix c {vec_a, 3, 3};
        return c;
    }

    std::ostream& operator << (std::ostream &out,const Matrix &a){

        return out;
    }
    std::istream& operator>> (std::istream& is, const Matrix &a){
        return is;
    }

}




