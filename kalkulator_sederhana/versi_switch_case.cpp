#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "== KALKULATOR SEDERHANA ==" << endl;
    cout << "\nMau ngapain hari ini ganteng?" << endl;
    cout << "1) Pertambahan" << endl;
    cout << "2) Pengurangan" << endl;
    cout << "3) Perkalian" << endl;
    cout << "4) Pembagian" << endl;
    cout << "5) Modulus" << endl;
    cout << "Pilih (1-5): ";
    cin >> a;
    cout << endl;

    switch (a) {
        case 1: {
            float x, y;
            cout << "Masukkan angka pertama: "; cin >> x;
            cout << "Masukkan angka kedua: "; cin >> y;
            cout << "Hasilnya adalah: " << x + y;
            break;
        }
        case 2: {
            float x, y;
            cout << "Masukkan angka pertama: "; cin >> x;
            cout << "Masukkan angka kedua: "; cin >> y;
            cout << "Hasilnya adalah: " << x - y;
            break;
        }
        case 3: {
            float x, y;
            cout << "Masukkan angka pertama: "; cin >> x;
            cout << "Masukkan angka kedua: "; cin >> y;
            cout << "Hasilnya adalah: " << x * y;
            break;
        }
        case 4: {
            float x, y;
            cout << "Masukkan angka pertama: "; cin >> x;
            cout << "Masukkan angka kedua: "; cin >> y;
            if (y != 0)
                cout << "Hasilnya adalah: " << x / y;
            else
                cout << "Error: Pembagian dengan nol!";
            break;
        }
        case 5: {
            int x, y;
            cout << "Masukkan angka pertama: "; cin >> x;
            cout << "Masukkan angka kedua: "; cin >> y;
            cout << "Hasilnya adalah: " << x % y;
            break;
        }
        default:
            cout << "Pilihan tidak valid!";
    }

    cin.get();
    return 0;
}