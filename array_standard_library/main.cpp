#include <iostream>
#include <array>
using namespace std;

int main(){
    // membuat array dengan menggunakan standard library
    // array<int, jumlah array> nama array;

    array<int, 4> arr;
    
    for (int i = 0; i < 4; i++){
        arr[i] = i;
        cout << "arr[" << i << "]: " << arr[i] << endl;
        cout << "Alamatnya, " << &arr[i] << endl;
    }

    cout << endl;

    // ukuran array
    cout << "Ukuran array:" << arr.size() << endl;
    // address awal dari array
    cout << "Address awal dari array: " << arr.begin() << endl;
    // address akhir dari array
    cout << "Address akhir dari array: " << arr.end() << endl;

    return 0;
}

// ingat, batas akhir nya adalah banyak data + 1, jadi sebenarnya batas
// akhir dari array dengan panjang 4 adalah 5, jadi addr akhir nya adalah address dari indeks 5 ini