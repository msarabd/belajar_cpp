#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "== KALKULATOR SEDERHANA =="<< endl;
    cout << "\nMau ngapain hari ini ganteng?" << endl;
    cout << "1) Pertambahan" << endl;
    cout << "2) Pengurangan" << endl;
    cout << "3) Perkalian" << endl;
    cout << "4) Pembagian" << endl;
    cout << "5) Modulus" << endl;
    cout << "Pilih (1-5): ";
    cin >> a;
    cout << endl;

    if (a == 1) {
        float x, y, hasil;

        cout << "Masukkan angka pertama: ";
        cin >> x;
        cout << "Masukkan angka kedua: ";
        cin >> y;
        
        hasil = x + y;
        cout << "Hasilnya adalah: " << hasil;
        
    } else if (a == 2) {
        float x, y, hasil;

        cout << "Masukkan angka pertama: ";
        cin >> x;
        cout << "Masukkan angka kedua: ";
        cin >> y;
        
        hasil = x - y;
        cout << "Hasilnya adalah: " << hasil;
        
    } else if (a == 3) {
        float x, y, hasil;

        cout << "Masukkan angka pertama: ";
        cin >> x;
        cout << "Masukkan angka kedua: ";
        cin >> y;
        
        hasil = x * y;
        cout << "Hasilnya adalah: " << hasil;
        
    } else if (a == 4) {
        float x, y, hasil;
        
        cout << "Masukkan angka pertama: ";
        cin >> x;
        cout << "Masukkan angka kedua: ";
        cin >> y;
        
        hasil = x / y;
        cout << "Hasilnya adalah: " << hasil;
        
    } else if (a == 5) {
        int x, y, hasil;
        
        cout << "Masukkan angka pertama: ";
        cin >> x;
        cout << "Masukkan angka kedua: ";
        cin >> y;
        
        hasil = x % y;
        cout << "Hasilnya adalah: " << hasil;
    
    } else {
        cout << "Pilihan Anda tidak valid!!!" << endl;
    }

    return 0;
} 