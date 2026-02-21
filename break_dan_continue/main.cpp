#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 10; i++){
        if (i == 6){
            break; // menghentikan perulangan
        }

        cout << i << endl;
    }
    
    cout << endl;
    int i = 0;
    do {
        i++;
        if (i <= 5){
            continue; // melewati statement di bawahnya dan langsung ke iterasi selanjutnya
        }

        cout << i << endl;
    } while (i <= 9);

    cin.get();
    return 0;
}