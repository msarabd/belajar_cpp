#include <iostream>
using namespace std;

// reporter (melapprkan kembali)
int kuadrat(int x){
    return x * x;
}

// worker (hanya bekerja, tidak ada laporan)
void tampilkan(string a, int x, int n){ // void itu tipe data, yang artinya kosong
    for (int i = 0; i < n; i++){
        cout << a << x << endl;
    }
}

int main(){
    int input, hasil, n;
    string output = "Hasil kudrat dari input: ";

    cout << "Masukkan nilai: ";
    cin >> input;
    cout << "Berapa kali mengulang: ";
    cin >> n;
    cout << endl;


    hasil = kuadrat(input);
    tampilkan(output, hasil, n);

    return 0;
}