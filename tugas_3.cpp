#include <iostream>
using namespace std;

int main(){
    int a[2][2] = {
        {1, 2},
        {4, 5}
    };

    cout << "== PROGRAM MENGHITUNG RATA-RATA DARI SEMUA ELEMEN MATRIKS ==" << endl << endl;
    cout << "Matriks A: " << endl;

    double total = 0;
    double banyak_elemen = 0;
    for (int i = 0; i < 2; i++){
        cout << "| ";
        for (int j = 0; j < 2; j++){
            cout << a[i][j] << " ";
            total += a[i][j];
            banyak_elemen++;
        }
        cout << "|" << endl;
    }

    cout << endl << "Jumlah semua elemen: " << total << endl;
    cout << "Banyak elemen: " << banyak_elemen << endl;
    cout << "Rata-rata: " << total/banyak_elemen << endl;
    return 0;
}