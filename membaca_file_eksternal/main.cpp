#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream myFile;
    string buffer, output;
    bool isData = false;
    int nomor;
    string nama;
    
    /*
    ios::in: default
    ios::ate: mulai dari akhir file
    ios::binary: membaca file biner
    */

    myFile.open("data.txt");
    // myFile >> output; akan mengambil kata pertama
    // myFilie >> output; akan mengambil kata setelahnya dan begitu terus 
    while (!isData){
        getline(myFile, buffer); // akan mengambil 1 baris dari myFile dan dikirim ke var. buffer
        output.append(buffer + "\n");
        if (buffer == "Data"){
            isData = true;
        }
    }
    myFile >> buffer;
    output.append(buffer + "\t");
    myFile >> buffer;
    output.append(buffer);
    cout << output << endl;

    while(!myFile.eof()){ // saat myFile belum akhir dari file
        myFile >> nomor;
        myFile >> nama;
        cout << nomor << "\t" << nama << endl;
    }
    myFile.close();

    cin.get();
    return 0;
}