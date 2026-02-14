#include <iostream>
using namespace std;

double eksponen(double basis, double pangkat){
    if (pangkat < 0){
        double balik_basis = 1 / basis;
        
        if (pangkat < 0){
            return balik_basis * eksponen(basis, pangkat + 1);
        } else{
            return 1;
        }
        
    } else{
        if (pangkat > 0){
            return basis * eksponen(basis, pangkat - 1);
        } else{
            return 1;
        }
    }
}

int main(){
    double a;
    double b;

    cout << "== PROGRAM MENGHITUNG EKSPONEN DENGAN REKURSIF ==" << endl << endl;
    cout << "Masukkan bilangan bulat a (basis): ";
    cin >> a;
    cout << "Masukkan bilangan bulat b (pangkat): ";
    cin >> b;
    cout << "\nHasil dari " << a << " dipangkatkan " << b << " adalah " << eksponen(a, b) << endl;
    return 0;
}