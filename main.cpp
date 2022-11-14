#include "BigReal.h"


int main(){
    BigReal x ;
    cin >> x;
    int z = x.sign();
    cout << z;
    z = x.size();
    cout << endl<<z;

}