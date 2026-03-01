#include <iostream>
using namespace std;

int main(){
    // variabel
    int a = 10;

    cout << "Address dari a: " << &a << endl;
    cout << "Nilai dari a: " << a << endl;
    
    // reference
    int& b = a;
    b = a;
    b = 30;
    
    cout << "Address dari b: " << &b << endl;
    cout << "Nilai dari b: " << b << endl;
    cout << "Address dari a baru: " << &a << endl;
    cout << "Nilai dari a baru: " << a << endl; // reference menyebabkan nilai aslinya juga ikut berubah
}