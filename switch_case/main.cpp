#include <iostream>

using namespace std;

int main() {
    
    int a; // switch case hanya bisa menggunakan tipe data integer

    cout << "Masukkan nilai a: ";
    cin >> a;

    switch(a){
        case 1:
            cout << "a = 1" << endl;
            break; // agar case dibawahnya tidak ikut dieksekusi (langsung keluar dari switch)
        case 2:
            cout << "a = 2" << endl;
        case 3:
            cout << "a = 3" << endl;
        case 4:
            cout << "a = 4" << endl;
        case 5:
            cout << "a = 5" << endl;
        default:
            cout << "Nilai a bukan 1 - 5" << endl; // jikan tidak ada case yang terpenuhi, maka dia akan tereksekusi sendiri
    }
    
    cout << "akhir dari program" << endl;

}

// witch case statement mengeksekusi semua case yang ada setelah case tersebut terpenuhi hingga akhit dari switch