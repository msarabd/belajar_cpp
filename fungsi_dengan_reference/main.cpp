#include <iostream>
using namespace std;

void ubahNilai(int&); // prototype cukup deklarasi header dan tipe datanya saja
void kubik(int&);

int main(){
    int a = 10;
    cout << "Nilai a sebelum: " << a << endl;
    cout << "Alamat a sebelum: " << &a << endl;

    ubahNilai(a);
    cout << "Nilai a setelah: " << a << endl;
    cout << "Alamat a setelah: " << &a << endl;

    kubik(a);
    cout << "Nilai kubik a: " << a << endl;
    cout << "Alamat kubik a: " << &a << endl;
    return 0;
}

void ubahNilai(int& b){
    b = 20;
    cout << "Nilai b: " << b << endl;
    cout << "alamat b: " << &b << endl; 
}

void kubik(int& c){
    c = c * c * c;
}