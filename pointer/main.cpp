#include <iostream>
using namespace std;

int main(){
    int a = 5; // int a mempunyai nilai dan alamat (address)

    // pointer
    int *aPtr = &a; // pada inisialisasi, asteris menandakan tipe data pointer
    *aPtr = a; // asteris pada assingment yaitu memberikan nilai pada var pointer aPtr

    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl;
    cout << "Alamat dari aPtr: " << aPtr << endl;
    
    // dereferencing, mengambil data/nilai dari sebuah pointer
    cout << "Nilai dari aPtr: " << *aPtr << endl; // anggapanna
}