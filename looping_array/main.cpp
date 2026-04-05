#include <iostream>
using namespace std;

int main(){
    // looping untuk array di c++ keatas
    /*
        for (deklarasi variabel : array){
            statement
    */

    int angka[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int nilai: angka){
        cout << &nilai << " nilainya " << nilai << endl;
    }

    for (int nilaiBaru: angka){
        nilaiBaru *= 5;
    }

    cout << endl;
    for (int& nilai: angka){
        cout << &nilai << " nilainya " << nilai << endl;
    }

    return 0;
}