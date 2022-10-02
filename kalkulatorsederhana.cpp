#include <iostream>
using namespace std;

int main (){
    float angkapertama,angkakedua,hasil;
    char aritmatika;

    cout << "Ini adalah kalkulator sederhana!" << endl;

    //masukkan input
    cout << "Masukkan nilai pertama: ";
    cin >> angkapertama;
    cout << "Masukkan operator (+,-,*,/): ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> angkakedua;

    cout << "Hasil perhitungan dari ";
    cout << angkapertama << " " << aritmatika << " " << angkakedua;

    if (aritmatika == '+'){
        hasil = angkapertama + angkakedua;
    }else if (aritmatika == '-'){
        hasil = angkapertama -  angkakedua;
    }else if (aritmatika == '*'){
        hasil = angkapertama * angkakedua;
    }else if (aritmatika == '/'){
        hasil = angkapertama / angkakedua;
    }else {
        cout << "Masukkan operator yang benar!" << endl;
    }

    cout << " = " << hasil << endl;

    return 0;
}