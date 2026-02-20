#include <iostream>
using namespace std;

int main(){
    /*
    for (inisialisasi, syarat, increment){
        aksi
    }
    */
    
    cout << "FOR KE-1" << endl;
    for (int i = 1; i <= 5; i++){
        cout << "mantap " << i << endl;
    }
    
    cout << "\nFOR KE-2" << endl;
    for (int i = 1; i <=5; i += 3){ // increment bisa dimodifikasi menggunakan assigment operator
        cout << "mantap " << i << endl;
    }
    
    cout << "\nFOR KE-3" << endl;
    for (int i = 1; i >= -5; i--){
        cout << "mantap " << i << endl;
    }
    
    cout << "\nFOR KE-4" << endl;
    int total = 0;
    for (int i = 1; i <= 5; i++, total += i){ // assingment total disini akan dieksekusi setelah 1 loop selesai
        cout << i << " || " << total << endl;
    }

    cin.get();
    return 0;
}