#include <iostream>

class RekeningBank {
private:
    double saldo;

public:
    // Constructor (Dipanggil otomatis saat objek dibuat)  
    RekeningBank(double saldo_awal) {   
        saldo = saldo_awal;  
    }  
      
    void cetak() {   
        std::cout << "Saldo sekarang: " << saldo << std::endl;   
    }  

    void setor(double jumlah) {
        saldo += jumlah;
        std::cout << "Setor uang sebesar: " << jumlah << std::endl;
        cetak();
    }

    void tarik(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Saldo tidak cukup, penarikan gagal." << std::endl;
            cetak();
        } else {
            saldo -= jumlah;
            std::cout << "Tarik: " << jumlah << std::endl;
            cetak();
        }
    }

};

int main() {

    RekeningBank rekening1(1000.0); // contoh inisiasi saldo awal

    rekening1.setor(500.0); // setor 500 dolar

    rekening1.tarik(200.0); // tarik 200 dolar
    rekening1.tarik(1500.0); // tarik 500 dolar

    return 0;
}
