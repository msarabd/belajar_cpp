#include <iostream>
using namespace std;

enum buah {apel, mangga, durian = -1, pepaya};
// jika ada nilai default seperti durian, maka data selanjutnya akan mengikuti iterasinya dari indeks durian

int main(){
    buah buah1;

    buah1 = mangga;
    cout << buah1 << endl;
    // enum berfungsi untuk menentukan posisi data atau nilai dalam sebuah range terbatas
    // jadi saat kita ngeprint data tersebut, yang akan keluar adalah indeks atau posisi data tersebut di enum

    cin.get();
    return 0;
}