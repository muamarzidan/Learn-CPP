#include <iostream>

using namespace std;

int main() {
    int bilangan, asli, jumlah;

    cout << "Masukan bilangan asli : ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;

    while (bilangan <= asli) {
        if (bilangan % 2 == 0) {
            jumlah += bilangan;
        }
        bilangan++;
    }

    cout << "Jumlah bilangan genap : " << jumlah << endl;
    return 0;
}

//int main() {
//    int a, b, bilangan;
//    cout << "Masukkan batas bawah : ";
//    cin >> a;
//    cout << "Masukkan batas atas : ";
//    cin >> b;
//    for (bilangan = a; bilangan <= b; bilangan++) {
//        cout << "Bilangan" << bilangan << endl;
//    }
//    return 0;
//}

//int main() {
//    int nilai;
//    cin >> nilai;
//    if (nilai > 80) {
//        cout << "A" << endl;
//    } else {
//        cout << "Bukan A" << endl;
//    }
//    return 0;
//}

//int main() {
//    int bil1 = 2, bil2 = 3, hasil;
//    hasil = bil1 <= bil2 && bil1 < bil2;
//    cout << hasil << endl;
//    hasil = bil1 >= bil2 || bil1 < bil2;
//    cout << hasil << endl;
//    hasil = !(bil1 >= bil2) || bil1 < bil2;
//    cout << hasil << endl;
//    return 0;
//}

//int main() {
//    int bil1 = 2, bil2 = 3, hasil;
//    hasil = bil1 > bil2;
//    cout << hasil << endl;
//    hasil = bil1 >= bil2;
//    cout << hasil << endl;
//    hasil = bil1 < bil2;
//    cout << hasil << endl;
//    hasil = bil1 <= bil2;
//    cout << hasil << endl;
//    hasil = bil1 == bil2;
//    cout << hasil << endl;
//    hasil = bil1 != bil2;
//    cout << hasil << endl;
//    return 0;
//}

//int main() {
//    int bil1 = 3, bil2 = 4, hasil1;
//    float bil3 = 3.0, bil4 = 4.0, hasil2;
//    hasil1 = bil1 + bil2;
//    cout << hasil1 << endl;
//    hasil1 = bil1 - bil2;
//    cout << hasil1 << endl;
//    hasil1 = bil1 * bil2;
//    cout << hasil1 << endl;
//    hasil1 = bil1 / bil2;
//    cout << hasil1 << endl;
//    hasil1 = bil2 / bil1;
//    cout << hasil1 << endl;
//    hasil1 = bil1 % bil2;
//    cout << hasil1 << endl;
//    hasil1 = bil2 % bil1;
//    cout << hasil1 << endl;
//    hasil2 = bil3 / bil4;
//    cout << hasil2 << endl;
//    return 0;
//}


//int main() {
//    string nama, nim;
//    cout << "Siapa nama anda? ";
//    cin >> nama;
//    cout << "Berapa nim anda? ";
//    cin >> nim;
//    cout << "Nama saya : " << nama << endl;
//    cout << "Nim saya : " << nim << endl;
//    return 0;
//}
