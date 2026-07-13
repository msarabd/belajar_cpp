#include <iostream> // ini salah satu yang diproses di preprecessing (tidak ada hubungan dengan memori) = preprocessing directive
// cpp -> preprocessing -> compiling
using namespace std;
#define PI 3.145678 // ini adalah macro

int main(){
    double pi = 3.145678;

    cout << "nilai dari PI: " << PI << endl;
    cout << "nilai dari pi: " << pi << endl; // bedanya hanya dia mengambil nilai dari memori yang udah dialokasikan
    cout << "alamat dari pi: " << &pi << endl;
    // sedangkan alamat dari PI tidak ada karena dia hanya mengganti PI dengan nilai 3.14, bukan mengakses memori

    cin.get();
    return 0;
}

// 3.145678 pada macro adalah nilai literal

