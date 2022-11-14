#ifndef UNTITLED1_LIBRARY_H
#define UNTITLED1_LIBRARY_H

#include <iostream>
#include "BigDecimalIntClass.h"
#include <cstring>
using namespace std;

class BigReal{
private:
    string real;
    BigDecimalInt num;
    BigDecimalInt floating;
public:
    BigReal(){};
//    BigReal(string real);
//    BigReal (double real);
//    BigReal(BigDecimalInt real);
//    BigReal (const BigReal&& other);
//    BigReal& operator = (BigReal& other);
//    BigReal& operator = (BigReal&& other);
//    BigReal operator + (BigReal& other);
//    BigReal operator - (BigReal& other);
   bool operator <  (BigReal anotherReal);
    bool operator >  (BigReal anotherReal);
   bool operator == (BigReal anotherReal);
    int size();
    int sign();
    friend ostream& operator << (ostream& out, BigReal& num);
   friend istream& operator >> (istream& in, BigReal& num);
   
};


#endif //UNTITLED1_LIBRARY_H