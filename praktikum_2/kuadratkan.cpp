#include <iostream>

void kuadratkan(int *val) {
    *val = (*val) * (*val);
}

int main() {
    int angka = 5;

    std::cout << "Nilai awal variabel 'angka': " << angka << std::endl;
    std::cout << "Alamat: " << &angka << std::endl;

    kuadratkan(&angka);

    std::cout << "Nilai setelah fungsi kuadratkan: " << angka << std::endl;
    std::cout << "Alamat: " << &angka << std::endl;

    return 0;
}
