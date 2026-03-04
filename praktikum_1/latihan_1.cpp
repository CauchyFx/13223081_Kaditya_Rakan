#include <iostream>

int main() {
    int proses_angka;
    int total = 0;
    int counter = 0;

    for (int i = 1; i <= 5; i++) {
        std::cout << "Masukkan bilangan ke-" << i << ": ";
        std::cin >> proses_angka;

        if (proses_angka > 0) {
            total += proses_angka;
            counter += 1;
        }
    }

    std::cout << "Jumlah seluruh bilangan positif adalah " << total << std::endl;
    std::cout << "Dengan total bilangan positif sebanyak " << counter << " buah" << std::endl;

    return 0;
}
