#include <iostream>
#include <string>
using namespace std;

int main(){
    // array char tidak bisa ditambah, karena array
    // char kata[5] = {'a', 'b', 'c', 'd', 'e'};
    // for (char data : kata){
    //     cout << data;
    // }

    string kata2("mantap");
    cout << kata2 << endl;

    string data;
    cout << "Masukkan kata: ";
    cin >> data;
    cout << "Kata yang dimasukkan: " << data;

    cin.get();
    return 0;
}