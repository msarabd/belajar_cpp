#include <iostream>
using namespace std;

int kuadrat(int x){
    return x * x; // tanpa variabel
}

int tambah(int x, int y){
    int hasil = x + y;
    return hasil; // dengan variabel
}

int main(){
    int input, hasil, a, b;

    cout << "Masukkan nilai: ";
    cin >> input;

    hasil = kuadrat(input);
    cout << "Kuadrat dari nilainya: " << hasil << endl;

    cout << "\nMasukkan nilai pertama: ";
    cin >> a;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    hasil = tambah(a, b);
    cout << "Hasil " << a << " + " << b << ": " << hasil << endl;

    return 0;
}