#include <iostream>
using namespace std;

int main(){
    /* do {
        aksi;
    } while(syarat)
    */
    
    int a = 2;

    do {
        cout << "mantap uyy ";
        cout << a << endl;
        a++;
    } while (a < 5);

    cin.get();
    return 0;
}

// while loop biasa = syarat >> aksi
// do while loop = aksi >> syarat (minimal aksi pasti dilaukan sekali)