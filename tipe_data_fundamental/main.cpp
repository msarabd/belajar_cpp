#include <iostream>
using namespace std; //  untuk simplify agar tidak selalu tulis std::

int main(){
    
    // int a; // ini namanya deklarasi var, memberitahu tipe datanya
    // a = 100;
    // cout << "Nilai a = " << a << endl;
    
    long long c = 652345243;
    cout << sizeof(c) << " byte" << endl;


    int b;
    cout << "Masukkan nilai b = ";
    cin >> b; // otomatis endl karena terjadi buffer input setelah enter
    cout << "Maka nilai b adalah = " << b << endl;
    return 0;
}

// int a = 100 -> ini namanya inisialisasi var
// cin -> ambil dari console(terminal), cout -> keluarkan ke console