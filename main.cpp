#include <iostream>

int main(){
    int data_awal[5] = {40, 39, 0, 80, 63};
    int batas = 39;
    int data_baru[10];
    int jumlah_masuk = 0;
    for (int i = 0; i < 5; i++){
        if (data_awal[i] > batas){
            data_baru[jumlah_masuk] = data_awal[i];
            jumlah_masuk++;
        }
    }
    std::cout << "Data baru = " << data_baru[0] << std::endl;
    return 0;
}