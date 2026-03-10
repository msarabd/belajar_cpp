#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

const int arraySize = 10;

void tampilArray(array<int, arraySize> &arr){
    cout << "Array = [";
    for (int& a : arr){
        cout << " " << a;
    }
    cout << " ]" << endl;
}
int main(){
    array<int, arraySize> angka = {5, 5, 7, 1, 0, 3, 2, 10, 9, 6};
    int angkaCari;
    bool ketemu;

    tampilArray(angka);
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> angkaCari;

    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);
    cout << "Apakah angka " << angkaCari << " ketemu: ";
    
    if (ketemu){
        cout << "iya" << endl;
    } else { 
        cout << "tidak" << endl;
    }

    return 0;
}