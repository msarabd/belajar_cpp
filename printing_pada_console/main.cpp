#include <iostream> // untuk menambhkan file iostream ke program 
/*
untuk comment multi line
*/

int main(){ // baris ini adalah kepala fungsinya, sendangkan "{}" untuk menandai body fungsinya
    std::cout << "Hello, World!" << std::endl; // setiap statement diakhiri dengan tanda titik koma
    std::cin.get();
    return 0; // menandakan program berakhir dengan sukses
}

// cout artinya console out  (print)
// cin artinya console in (input)
// get() berfungsi untuk menunggu input dari user sebelum program berakhir
// std adalah namespace standar dari C++ yang berisi fungsi-fungsi dasar seperti cout dan cin
// endl berfungsi untuk membuat baris baru pada output, kalau tidak ada ini, statement selanjutnya akan berjalan di sebelahnya
// kenapa harus ada return? karena kita mendefinikan fungsi dengan int di awal, jadi harus mengembalikan nilai integer