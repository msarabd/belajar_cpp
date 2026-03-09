#include <iostream>
using namespace std;

// prototipe harus dipanggil sebelum fungsinya dipanggil di main
double hitung_luas(double p, double l); // anggap hanya seperti deklarasi

void println(double x);

int main(){
    int panjang, lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    
    println(hitung_luas(panjang, lebar));

    return 0;
}

double hitung_luas(double p, double l){ // anggap seperti assignment
    return p * l;
}

void println(double x){
    cout << x << endl;
}
