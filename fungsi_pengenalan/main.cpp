#include <iostream>
#include <cmath> // standard library untuk perhitungan math
using namespace std;

// www.cppreference.com: web refrensi std library c++

int main(){
    int x;
    
    cout << "Masukkan nilai x: ";
    cin >> x;
    
    double y = sqrt(x);
    cout << "Akar kuadrat dari x: " << y << endl;
    return 0;
}

/* * ==============================================================================
 * RANGKUMAN FUNGSI LIBRARY <cmath> - C++ STANDARD LIBRARY
 * ==============================================================================
 * * Penggunaan: Pastikan Anda menambahkan '#include <cmath>' di awal program.
 * Sebagian besar fungsi mengembalikan tipe data 'double'.
 * * ------------------------------------------------------------------------------
 * 1. FUNGSI EKSPONEN & AKAR (Power & Roots)
 * ------------------------------------------------------------------------------
 * pow(base, exp) : Menghitung pangkat (Contoh: pow(2, 3) = 8).
 * sqrt(x)        : Akar kuadrat (Square root).
 * cbrt(x)        : Akar pangkat tiga (Cube root).
 * hypot(x, y)    : Hipotenusa/sisi miring segitiga (sqrt(x*x + y*y)).
 * * ------------------------------------------------------------------------------
 * 2. FUNGSI PEMBULATAN (Rounding)
 * ------------------------------------------------------------------------------
 * ceil(x)        : Pembulatan ke ATAS (Nilai integer terkecil >= x).
 * floor(x)       : Pembulatan ke BAWAH (Nilai integer terbesar <= x).
 * round(x)       : Pembulatan ke integer TERDEKAT (.5 ke atas).
 * trunc(x)       : Pemotongan desimal (Menghapus angka di belakang koma).
 * * ------------------------------------------------------------------------------
 * 3. FUNGSI TRIGONOMETRI (Input dalam RADIAN)
 * ------------------------------------------------------------------------------
 * sin(x)         : Menghitung sinus.
 * cos(x)         : Menghitung cosinus.
 * tan(x)         : Menghitung tangen.
 * asin(x)        : Invers sinus (Arcsin).
 * acos(x)        : Invers cosinus (Arccos).
 * atan(x)        : Invers tangen (Arctan).
 * * ------------------------------------------------------------------------------
 * 4. FUNGSI LOGARITMA & ABSOLUT
 * ------------------------------------------------------------------------------
 * abs(x) / fabs(x): Mencari nilai absolut (mutlak).
 * log(x)         : Logaritma natural (basis e).
 * log10(x)       : Logaritma basis 10.
 * exp(x)         : Nilai eksponensial e^x.
 * fmod(x, y)     : Sisa bagi (modulo) untuk bilangan desimal/floating-point.
 * * ==============================================================================
 */