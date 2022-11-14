#include "BigReal.h"




int BigReal::size() {
    return num.size() + floating.size();
}

int BigReal::sign() {
    return num.sign();
}

bool BigReal::operator>(BigReal anotherReal) {
    if(num > anotherReal.num)
        return true;
    if(floating > anotherReal.floating)
        return true;
    return false;
}

bool BigReal::operator<(BigReal anotherReal) {
    if(num < anotherReal.num)
        return true;
    else if(floating < anotherReal.floating)
        return true;
    return false;
}

bool BigReal::operator==(BigReal anotherReal) {
    if (num == anotherReal.num && floating == anotherReal.floating)
        return true;
    return false;
}

 ostream& operator << (ostream& out, BigReal& num){
    out << num.num;
    out << "."<< num.floating;
     return out;
}

istream & operator >> (istream & in, BigReal& num){
    string real_num = "";
    string floating_num = "";
    in >> num.real;
    for (int i = 0; i < num.real.size(); ++i) {
        if(num.real[i] == '.')
            break;
        real_num = real_num + num.real[i];
    }
    for (int i = num.real.find('.')+1; i < num.real.size(); ++i) {
        floating_num = floating_num+num.real[i];
    }
    num.num.setNumber(real_num);
    num.floating.setNumber(floating_num);
    return in;
}




