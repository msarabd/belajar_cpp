#include <iostream>
using namespace std;

// kalau pakai prototype
double volume(double panjang = 3, double lebar = 2, double tinggi = 1); // pemberian default pada protoptypenya

int main(){
    cout << "Volume kubus: " << volume(3,4,5) << endl;
    cout << "Volume kubus: " << volume(3,4) << endl;
    cout << "Volume kubus: " << volume(3) << endl;
    cout << "Volume kubus: " << volume() << endl;
    
    return 0;
}

double volume(double panjang, double lebar, double tinggi){  // bukan pada saat pemeberian nilai fungsinya
    return panjang * lebar * tinggi;
}