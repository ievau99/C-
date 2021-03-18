#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b,d;
    char c;
    cout <<"Iveskite du skaicius ir operacijos simboli:";
    cin >>a>>b>>c;
    cout << "Suskaiciuokit gautojo reiskinio reiksme " <<2<<"*"<<a<<c<<b<<"=";
    cin >>d;
     if (d==2*a+b)
         cout << "Suskaiciuota teisngai";
     else if(d==2*a-b)
         cout << "Suskaiciuota teisngai";
     else if(d==2*a*b)
         cout << "Suskaiciuota teisngai";
     else if(d==2*a/b)
         cout << "Suskaiciuota teisngai";  // neaisku kaip apibrezti, kad skaiciuotu po kablelio
     else
         cout << "Suskaiciavote neteisingai";

    return 0;
}
