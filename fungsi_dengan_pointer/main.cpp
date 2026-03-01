#include <iostream>
using namespace std;

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr); // bisa update var globalnya tanpa pakai return dengan pointer
}

int main(){
    int a = 100;
    
    cout << "Address a: " << &a << endl;
    cout << "Nilai a: " << a << endl;

    // fungsi(&a); // fungsi dengan input pointer
    kuadrat(&a); // parameter aktualnya harus berupa alamat

    cout << "Nilai a baru: " << a << endl;
    cout << "Address a: " << &a << endl;

    return 0;
}