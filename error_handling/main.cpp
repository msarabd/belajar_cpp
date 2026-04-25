#include <iostream>
#include <array>
#include <exception>
using namespace std;

// 1. syntax error
// 2. linking error (saat ada prototipe sudah dideklarasikan, tetapi tidak ada definisi fungsi yang sesuai)
// 3. non-error (misal program luas, tetapi kita memasukkan input negatif)
// 4. runtime error 

int bagi(int& a, int& b){
    if (b == 0){
        throw "Error: hasil tidak terdefinisi";
    }
    return a/b;
}

int main(){
    int a, b, c;
    char is_lanjut;

    while (true){
        cout << "Masukkan nilai a: ";
        cin >> a;
        cout << "Masukkan nilai b: ";
        cin >> b;
        
        try{
            c = bagi(a, b);
            cout << "Hasil bagi: " << c << endl;
            cout << "Apakah ingin lanjut (y/n): ";
            cin >> is_lanjut;

            if (is_lanjut == 'n' || is_lanjut == 'N'){
                break;
            
            } else if (is_lanjut == 'y' || is_lanjut == 'Y'){
                cout << endl;
                continue;
            
            } else {
                cout << "Input tidak valid mass" << endl << endl;;
            
            }

            cout << endl;

        } catch (const char* e){
            cout << e << endl << endl;
        }
    }

    cout << "selesai" << endl;
    return 0;
}