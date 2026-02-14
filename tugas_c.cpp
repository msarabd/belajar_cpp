#include <iostream>
using namespace std;

double a;
double b;

int i = 0;
double eksponen(double basis, double pangkat){
    if (pangkat < 0){
        double balik_basis = 1 / basis;

        if (i > pangkat){
            i--;
            return balik_basis * eksponen(basis, pangkat);
        } else{
            return 1;
        }

    } else{
        if (i < pangkat){
            i++;
            return basis * eksponen(basis, pangkat);
        } else{
            return 1;
        }
    }
}

int main(){
    cout << "== PROGRAM MENGHITUNG EKSPONEN DENGAN REKURSIF ==" << endl << endl;
    cout << "Masukkan bilangan bulat a (basis): ";
    cin >> a;
    cout << "Masukkan bilangan bulat b (pangkat): ";
    cin >> b;
    cout << "\nHasil dari " << a << " dipangkatkan " << b << " adalah " << eksponen(a, b) << endl;
    return 0;
}