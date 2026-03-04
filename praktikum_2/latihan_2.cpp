#include <iostream>

double hitungRataRata(double arrayy[], int size) {
    double total = 0;
    for (int i = 1; i <= size; i++) {
        total += arrayy[i];
    }

    return total/size;
}

int main() {
    const int ukuran = 8;
    double dummy[ukuran] = {1.4,4.1,2.5,9.11,1.42,21.9,14.6,-43.2};

    double hasil_akhir = hitungRataRata(dummy, ukuran);

    std::cout << "Rata-Rata seluruh nilai di dalam array adalah " << hasil_akhir << std::endl;

}
