#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
using namespace std;

int main(){
    ofstream myFile;

    /*
    ios::out = default, operasi output
    ios::app = menuliskan pada akhir baris
    ios::trunc = default, membuat file baru jika belum ada filenya
    */

    myFile.open("data1.txt"); 
    // menghapus file dan isi yang sudah ada, baru membuat file dan memasukkan isi yang baru
    myFile << "bisa diisi cuy";
    myFile.close();
    
    int a = 12345;
    myFile.open("data2.txt", ios::app);
    myFile << "tambahan baris baru\n";
    myFile << a; // statusnya pada file tersebut akan menajadi string;
    myFile.close();
    
    cin.get();
    return 0;
}