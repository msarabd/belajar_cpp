#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printHuruf(array<char, arraySize> &arr){
    cout << "Array = ";
    for (char &a : arr){ // kayak for i in array di python, langsung akses elemennya
        cout << a << " ";
        // if (i == n - 1){
        //     cout << arr[i] << "]" << endl;     
        // } else {
        //     cout << arr[i] << ", ";
        // }
    }
    cout << endl;
}

void printAngka(array<int, arraySize> &arr){
    cout << "Array = ";
    for (int &a : arr){
        cout << a << " ";
        // if (i == n - 1){
        //     cout << arr[i] << "]";     
        // } else {
        //     cout << arr[i] << ", ";
        // }
    }
    cout << endl;

}
int main(){
    array<int, arraySize> angka = {3, 5, 2, 2, 1, 0, 2, 5, 9, 10};
    array<char, arraySize> huruf = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    cout << "SEBELUM DISORTING" << endl;
    printAngka(angka);
    printHuruf(huruf);
    
    sort(angka.begin(), angka.end());
    sort(huruf.begin(), huruf.end());
    
    cout << "\nSESUDAH DISORTING" << endl;
    printAngka(angka);
    printHuruf(huruf);

    return 0;
}   