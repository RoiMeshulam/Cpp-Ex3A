#include "Matrix.hpp"
#include <algorithm>
#include <string>
#include <stdexcept>
#include <vector>
#include <iostream>
#include "doctest.h"

using namespace zich;

TEST_CASE("good cases"){
    std::vector<double> vec_a = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix a {vec_a, 3, 3};
    std::vector<double> vec_b = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix b {vec_b,3,3};
    std::vector<double> vec_c = {4, 0, 0, 0, 4, 0, 0, 0, 4};
    Matrix c {vec_c,3,3};
    bool ans= a < b; //true
    CHECK(ans == true);
    ans= c > b;// true
    CHECK(ans == true);
    ans = c>=b; //true
    CHECK(ans==true);
    ans= c<=b; //false
    CHECK(ans==false);
    ans = a<=b;
    CHECK(ans==true);
    ans= a<c;//true
    CHECK(ans==true);
    ans= (a+b) == c; // true
    CHECK(ans== true);
    ans= (c-b)==a; // true
    CHECK(ans == true);
    a+=b;
    ans= a==c; // true
    CHECK(ans == true);
    ans= a!=b;// true
    CHECK(ans == true);
    Matrix d (vec_a,3,3);
    a-=d;
    ans = a==b; //true
    CHECK(ans==true);
//    a--;
    ans= (d*3)==b;
    CHECK(ans==true);
    ans= (3*d)==b;
    CHECK(ans==true);
    ans= (3*d)==a;// false
    CHECK(ans==false);
}

TEST_CASE("bad cases and difficult cases"){
    std::vector<double> vec_a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Matrix a {vec_a, 2, 5};
    std::vector<double> vec_b = {8, 7, 6, 5, 4, 3, 2, 1};
    Matrix b {vec_b,4,2};
    std::vector<double> vec_c = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Matrix c {vec_c,4,2};

    CHECK_THROWS(a*b);
    CHECK_NOTHROW(b*a); // it's ok
    CHECK_THROWS(a+b);
    CHECK_NOTHROW(b+c);
    CHECK_THROWS(a-b);
    CHECK_NOTHROW(b-c);

}