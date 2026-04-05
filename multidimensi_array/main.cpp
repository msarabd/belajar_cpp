#include <iostream>
using namespace std;

void tampilArray(int* ptr, int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris; i++){
        cout << "[ ";
        for (int j = 0; j < kolom; j++){
            cout << *(ptr + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main(){
    int baris = 2;
    int kolom = 2;
    int arrayMD[baris][kolom] = {
        {1,2},
        {3,4}
    };

    tampilArray(*arrayMD, baris, kolom);
    return 0;
}