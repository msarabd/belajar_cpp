#include <iostream>
#include <cstdlib> // mengandung fungsi random
using namespace std;

int main(){
    char lanjut;

    while (true){
        cout << "Lanjut acak dadu (y/n)? ";
        cin >> lanjut;

        if (lanjut == 'y'){
            cout << 1 + rand() % 10 << endl << endl;
        } else if (lanjut == 'n'){
        cout << "program selesai!!" << endl;
            break;
        } else {
            cout << "warning: input y/n dong ganteng!!\n" << endl; 
        }
    }

    return 0;
}   