#include <iostream>
using namespace std;

double luas(double p, double l){
    return p * l;
}

double keliling(double p, double l){
    return 2 * (p + l);
}

void tampilkan_luas(double p, double l){
    cout << "program: melakukan perhitungan luas!" << endl;
    double hasil = luas(p, l);
    cout << "Luas dengan panjang " << p << " dan lebar " << l << ": " << hasil << endl << endl;
}

void tampilkan_keliling(double p, double l){
    cout << "program: melakukan perhitungan keliling!" << endl;
    double hasil = keliling(p, l);
    cout << "Keliling dengan panjang " << p << " dan lebar " << l << ": " << hasil << endl << endl;
}

int main(){
    int panjang, lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    cout << endl;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);

    return 0;
}