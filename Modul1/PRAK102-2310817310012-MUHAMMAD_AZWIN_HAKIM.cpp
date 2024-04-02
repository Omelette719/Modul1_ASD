#include <iostream>
#include <string>
using namespace std;

struct Kendaraan {
    string platNomor;
    string jenis;
    string namaPemilik;
    string alamat;
    string kota;
};

int main() {

    Kendaraan kendaraan1;

    kendaraan1.platNomor = "DA1234MK";
    kendaraan1.jenis = "RUSH";
    kendaraan1.namaPemilik = "Andika Hartanto";
    kendaraan1.alamat = "Jl. Kayu Tangi 1";
    kendaraan1.kota = "Banjarmasin";

    cout << "Plat Nomor Kendaraan : " << kendaraan1.platNomor << endl;
    cout << "Jenis Kendaraan : " << kendaraan1.jenis << endl;
    cout << "Nama Pemilik : " << kendaraan1.namaPemilik << endl;
    cout << "Alamat : " << kendaraan1.alamat << endl;
    cout << "Kota : " << kendaraan1.kota << endl;

    return 0;
}
