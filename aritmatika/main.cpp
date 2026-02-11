#include <iostream>

using namespace std;

int main(){

    int a = 7;
    int b = 4;
    int hasil;
    
    // operatornya +, -, *, /, %

    // penjumlahan
    hasil = a + b;
    cout << "Penjumlahan " << a << " + " << b << " = " << hasil  << endl;
    
    // pengurangan
    hasil = a - b;
    cout << "Pengurangan " << a << " - " << b << " = " << hasil  << endl;
    
    // perkalian
    hasil = a * b;
    cout << "Perkalian " << a << " * " << b << " = " << hasil  << endl;
    
    // pembagian
    hasil = a / b; // hasilnya dibulatkan, karena pada deklarasi var nya di atas int
    cout << "Pembagian " << a << " / " << b << " = " << hasil  << endl;
    
    // modulus
    hasil = a % b; // hasilnya dibulatkan, karena pada deklarasi var nya di atas int
    cout << "Modulus " << a << " % " << b << " = " << hasil  << endl;
    
    // hirarki operator
    hasil = a + b * 3;
    cout << hasil << endl; 
    
    cin.get();
    return 0;
}

// kalau ingin hasil pembagian dengan desimal, salah satu antara pembagi atau yang dibagi harus
// bertipe data float atau double, lalu hasilnya pun harus bertipe float atau double