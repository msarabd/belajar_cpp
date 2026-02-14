#include <iostream>
using namespace std;

int main(){
    int a[2][2];

    cout << "== PROGRAM MENGHITUNG INVERS MATRIKS ==" << endl << endl;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan elemen baris ke-" << i+1 << " kolom ke-" << j + 1 << ": ";
            cin >> a[i][j];
        }
    }
    
    cout << "\nMatriks A: " << endl;

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
    // cout << endl << "Jumlah semua elemen: " << total << endl;
    // cout << "Banyak elemen: " << banyak_elemen << endl;
    // cout << "Rata-rata: " << total/banyak_elemen << endl;
    return 0;
}