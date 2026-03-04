#include <iostream>
#include <fstream> // library akses file
#include <string>  // library teks
#include <vector>  // library vector

int main() {

    //- Tahap 1 -//
    std::vector<double> sensor;

    //- Tahap 2 -//
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    //- Tahap 3 -//
    for (size_t i = 0; i < sensor.size(); i++) {
        sensor[i] *= 1.1;
    }

    //- Tahap 4 -//
    std::ofstream fileOutput("hasil_kalibrasi.txt");

    if (fileOutput.is_open()) {
        //- Tahap 5 -//
        for (size_t i = 0; i < sensor.size(); i++) {
            fileOutput << sensor[i] << std::endl;
        }
        fileOutput.close();
        
        std::cout << "Successfully saved at 'hasil_kalibrasi.txt'\n";

    } else {
        std::cout << "Failed to open file.\n";
    }

    return 0;
}
