#include <iostream>
using namespace std;

int main(){
    int sisi[3];
    int j;
    int sisi_terpanjang;
    int sisi_lainnya[2];
    bool cek_bil_asli;
    bool cek_segitiga;
    int total_kuadrat;

    cout << "== PROGRAM MENENTUKAN TRIPEL PYTAGORAS ==" << endl << endl;
    for (int i = 0; i < 3; i++){
        cout << "Masukkan blangan ke-" << i + 1 << ": ";
        cin >> sisi[i];
    }

    j = 0;
    sisi_terpanjang = sisi[0];
    for (int i = 1; i < 3; i++){
        
        if (sisi[i] >= sisi_terpanjang){
            sisi_lainnya[j] = sisi_terpanjang;
            sisi_terpanjang = sisi[i];
            j++;
        } else {
            sisi_lainnya[j] = sisi[i];
            j++;
        }    
    }

    cek_bil_asli = (sisi[0] > 0) && (sisi[1] > 0) && (sisi[2] > 0);
    total_kuadrat = (sisi_lainnya[0] * sisi_lainnya[0]) + (sisi_lainnya[1] * sisi_lainnya[1]);
    
    if (cek_bil_asli == true && total_kuadrat == sisi_terpanjang*sisi_terpanjang){
        cout << "\nNilai pytagorasnya adalah " << sisi_terpanjang << " dan ketiga bilangan tersebut merupakan tripel pytagoras" << endl;
        
    } else if (cek_bil_asli == false){
        cout << "\nInput harus berupa bilangan asli" << endl;
    
    } else {
        cout << "\nIni bukanlah tripel pytagoras" << endl;
    
    }

    return 0;
}