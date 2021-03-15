#include <iostream>

using namespace std;

int main() {
   float a, b, c, d;
    cout << "Iveskite 4  naturaliuosius skaicius, kur du yra nezinomi ir ivedami kaip 0, bet butinai pirmas arba antras skaitmuo yra ivestas "<< endl;
    cin >> a >> b >> c >> d;
    if (a == 0 && c == 0) {
        a = (b / d);
        c = a + b;
        cout << "Nutrintas skaicius a=" << a;
        cout << "\nNutrintas skaicius c=" << c;
    } else if (a == 0 && d == 0) {
        a = (b - c);
        d = a * b;
        cout << "Nutrintas skaicius a=" << a;
        cout << "\nNutrintas skaicius d=" << d;

    } else if (b == 0 && c == 0) {
        b = d / a;
        c = a + b;
        cout << "Nutrintas skaicius b=" << b;
        cout << "\nNutrintas skaicius c=" << c;

    } else if (b == 0 && d == 0) {
        b = c - a;
        d = a * b;
        cout << "Nutrintas skaicius b=" << b;
        cout << "\nNutrintas skaicius d=" << d;

    } else if (c == 0 && d == 0) {
        c = a + b;
        d = a * b;
        cout << "Nutrintas skaicius c=" << c;
        cout << "\nNutrintas skaicius d=" << d;
    } else if (a == 0 && b == 0)
        cout << "Bent vienas is siu skaitmenu turi buti zinomas";
    return 0;
}
