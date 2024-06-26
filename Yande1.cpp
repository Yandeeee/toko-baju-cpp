#include <iostream>
#include <string>
using namespace std;

 const double diskon_usia_di_bawah_18 = 0.10;
 const double diskon_usia_18_65 = 0.05;
 const double diskon_di_atas_65 = 0.15;     

int main() {
    // Deklarasi variabel
    string namaBarangYangMauAndaBeli;
    double hargaBarang;
    int jumlahBarang;
    int usiaPengguna;
    double totalHarga;

    // Input informasi barang
    cout << "Nama Barang Yang Mau Anda Beli: ";
    getline(cin, namaBarangYangMauAndaBeli );

    cout << "Harga Barang: ";
    cin >> hargaBarang;

    cout << "Jumlah Barang: ";
    cin >> jumlahBarang;

    // Input usia pengguna
    cout << "Usia Pengguna: ";
    cin >> usiaPengguna;

 totalHarga = hargaBarang * jumlahBarang;
 
    // Hitung diskon berdasarkan usia pengguna
    if (usiaPengguna < 18) {
         totalHarga -=  totalHarga * diskon_usia_di_bawah_18;
    } else if (usiaPengguna >= 18 && usiaPengguna <= 65) {
        totalHarga -= totalHarga * diskon_usia_18_65;
    } else {
        totalHarga -= totalHarga * diskon_di_atas_65;
    }

   
    // Output informasi pembelian
    cout << "\nInformasi Pembelian:" << endl;
    cout << "Nama Barang: " << namaBarangYangMauAndaBeli << endl;
    cout << "Harga per Barang: " << hargaBarang << endl;
    cout << "Jumlah Barang yang Dibeli: " << jumlahBarang << endl;
    cout << "Usia Pengguna: " << usiaPengguna << " tahun" << endl;
     if (usiaPengguna < 18) {
       cout << "Diskon : 10%" << endl;
    } else if (usiaPengguna >= 18 && usiaPengguna <= 65) {
       cout << "Diskon : 5%" << endl;
    } else {
        cout << "Diskon : 15%" << endl;
    }
    cout << "Total Harga Setelah Diskon: " << totalHarga << endl;

    return 0;
}
