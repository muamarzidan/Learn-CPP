#include <iostream>

using namespace std;

int kendaraan(int kapasitas_kendaraan, int jumlah_kendaraan) {
    int jumlah;
    jumlah = jumlah_kendaraan / kapasitas_kendaraan;
    if (jumlah_kendaraan % kapasitas_kendaraan > 0) {
        jumlah++;
    }

    return jumlah;
}

int main() {
    int kap_kendaraan, jum_penumpang, banyak_kendaraan;
    cout << "Masukkan kapasitas kendaraan: ";
    cin >> kap_kendaraan;
    cout << "Masukkan jumlah penumpang: ";
    cin >> jum_penumpang;
    banyak_kendaraan = kendaraan(kap_kendaraan, jum_penumpang);
    cout << "Banyak kendaraan yang disewa: " << banyak_kendaraan << endl;
    return 0;
}


// void tukar(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int bil1, bil2;
//     cout << "Masukkan bilangan pertama: ";
//     cin >> bil1;
//     cout << "Masukkan bilangan kedua: ";
//     cin >> bil2;
//     cout << "Sebelum pertukaran:\n";
//     cout << "Bil 1:" << bil1 << " Bil 2:" << bil2 << endl;
//     tukar(&bil1, &bil2);
//     cout << "Setelah pertukaran:\n";
//     cout << "Bil 1:" << bil1 << " Bil 2:" << bil2 << endl;
//     return 0;
// }


// int main() {
//     int bil[10];
//     bil[0] = 1;
//     bil[1] = 4;
//     bil[2] = 5;
//     cout << bil[0] << endl;
//     cout << bil[1] << endl;
//     cout << bil[2] << endl;
//     cout << bil[0] + bil[1] + bil[2] << endl;
//     return 0;
// }