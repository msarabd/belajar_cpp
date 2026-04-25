#include <iostream>
#include <array>
using namespace std;

const int baris = 3;
const int kolom = 2;

void tampilArray(array < array < int, kolom > , baris > &arrayMD){
    for (array < int, kolom >& vectorBaris: arrayMD){
        for (int& vectorKolom: vectorBaris){
            cout << &vectorKolom << " nilainya: " << vectorKolom << ", ";
        }
        cout << endl;
    }
}
int main(){
    array < array < int, kolom > , baris > arrayMD = {0, 1, 2, 3, 4, 5};

    tampilArray(arrayMD);
    return 0;
}