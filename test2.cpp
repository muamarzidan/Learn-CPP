#include <iostream>
#include "SSL.h" // Mengimpor file header

using namespace std;

int main() {
    // Deklarasi variable List sesuai dengan tugas
    List TS;

    // Mengcreate List
    Create_List(TS);

    // Meminta user memasukkan data barang pertama
    Barang barang1;
    cout << "Masukkan data barang pertama\n";
    cout << "Nama Barang: "; cin >> barang1.nama;
    cout << "Jenis Barang: "; cin >> barang1.jenis;
    cout << "Harga Barang: "; cin >> barang1.harga;

    // Melakukan create new elemen berdasarkan data yang diinputkan user
    adr p1 = New_Element(barang1);

    // Memanggil Insert_First
    Insert_First(TS, p1);

    // Meminta user memasukkan data barang kedua
    Barang barang2;
    cout << "Masukkan data barang kedua\n";
    cout << "Nama Barang: "; cin >> barang2.nama;
    cout << "Jenis Barang: "; cin >> barang2.jenis;
    cout << "Harga Barang: "; cin >> barang2.harga;

    adr p2 = New_Element(barang2);
    Insert_Last(TS, p2);

    // Meminta user memasukkan data barang ketiga
    Barang barang3;
    cout << "Masukkan data barang ketiga\n";
    cout << "Nama Barang: "; cin >> barang3.nama;
    cout << "Jenis Barang: "; cin >> barang3.jenis;
    cout << "Harga Barang: "; cin >> barang3.harga;

    adr p3 = New_Element(barang3);
    Insert_First(TS, p3);

    // Meminta user memasukkan data barang keempat
    Barang barang4;
    cout << "Masukkan data barang keempat\n";
    cout << "Nama Barang: "; cin >> barang4.nama;
    cout << "Jenis Barang: "; cin >> barang4.jenis;
    cout << "Harga Barang: "; cin >> barang4.harga;

    adr p4 = New_Element(barang4);
    Insert_Last(TS, p4);

    // Menampilkan semua data dalam list
    cout << "\nData dalam List:\n";
    Show(TS);

    // Menghapus data dengan Delete_First
    adr del1;
    Delete_First(TS, del1);
    cout << "\nData setelah menghapus elemen pertama:\n";
    Show(TS);

    // Menghapus data dengan Delete_Last
    adr del2;
    Delete_Last(TS, del2);
    cout << "\nData setelah menghapus elemen terakhir:\n";
    Show(TS);

    return 0;
}


void Create_List(List& L) {
    L.first = nullptr;
}

adr New_Element(infotype data) {
    adr p = new elementList;
    p->info = data;
    p->next = nullptr;
    return p;
}

void Insert_First(List& L, adr p) {
    p->next = L.first;
    L.first = p;
}

void Insert_Last(List& L, adr p) {
    if (L.first == nullptr) {
        L.first = p;
    } else {
        adr last = L.first;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = p;
    }
}

void Insert_After(List& L, adr prec, adr p) {
    if (prec != nullptr) {
        p->next = prec->next;
        prec->next = p;
    }
}

void Delete_First(List& L, adr& p) {
    if (L.first != nullptr) {
        p = L.first;
        L.first = L.first->next;
        p->next = nullptr;
    }
}

void Delete_Last(List& L, adr& p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else if (L.first->next == nullptr) {
        p = L.first;
        L.first = nullptr;
    } else {
        adr prev = nullptr;
        adr last = L.first;
        while (last->next != nullptr) {
            prev = last;
            last = last->next;
        }
        p = last;
        prev->next = nullptr;
    }
}

void Delete_After(List& L, adr prec, adr& p) {
    if (prec != nullptr && prec->next != nullptr) {
        p = prec->next;
        prec->next = p->next;
        p->next = nullptr;
    }
}

void Show(const List& L) {
    adr p = L.first;
    if (p == nullptr) {
        std::cout << "List kosong.\n";
    } else {
        while (p != nullptr) {
            std::cout << "Nama Barang : " << p->info.nama << "\n";
            std::cout << "Jenis Barang : " << p->info.jenis << "\n";
            std::cout << "Harga Barang : " << p->info.harga << "\n";
            p = p->next;
        }
    }
}



PSEUDOCODE

//deklarasi variable List. Nama variable List adalah huruf pertama pada nama lengkap Anda dan huruf terakhir nama lengkap anggota tim Anda
MN <- List

//meng create list
procedure Create_List (In/Out L : List)

//meminta user data pertama yang akan dimasukkan ke list
barang1 <- Barang
output("Masukkan data barang pertama")
output("Nama Barang : ")
input(barang1.nama)
output("Jenis Barang : ")
input(barang1.jenis)
output("Harga Barang : ")
input(barang1.harga)

//melakukan create new elemen berdasarkan data yang diinputkan user
p1 adr <- function New_Element(barang1)
//memanggil salah satu jenis insert (jangan insert after)
procedure Insert_First (In/Out L : List, In p : adr)


//meminta user data kedua yang akan dimasukkan ke list
barang2 <- Barang
output("Masukkan data barang kedua")
output("Nama Barang : ")
input(barang2.nama)
output("Jenis Barang : ")
input(barang2.jenis)
output("Harga Barang : ")
input(barang2.harga)

//melakukan create new elemen berdasarkan data yang diinputkan user
p2 adr <- function New_Element(barang2)
//memanggil salah satu jenis insert (berbeda dengan insert yang data pertama, jangan Insert after)
procedure Insert_Last (In/Out L : List, In p : adr)
	

//meminta user data ketiga yang akan dimasukkan ke list
barang3 <- Barang
output("Masukkan data barang ketiga")
output("Nama Barang : ")
input(barang3.nama)
output("Jenis Barang : ")
input(barang3.jenis)
output("Harga Barang : ")
input(barang3.harga)

//melakukan create new elemen berdasarkan data yang diinputkan user
p3 adr <- function New_Element(barang3)
//memanggil salah satu jenis insert (insert First)
procedure Insert_First (In/Out L : List, In p : adr)


//meminta user data keempat yang akan dimasukkan ke list
barang4 <- Barang
output("Masukkan data barang keempat")
output("Nama Barang : ")
input(barang4.nama)
output("Jenis Barang : ")
input(barang4.jenis)
output("Harga Barang : ")
input(barang4.harga)

//melakukan create new elemen berdasarkan data yang diinputkan user
p4 adr <- function New_Element(barang4)
//memanggil salah satu jenis insert (insert Last)
procedure Insert_Last (In/Out L : List, In p : adr)


//memanggil show
procedure show (In L : List)

//melakukan penghapusan data dengan memanfaatkan salah satu jenis delete (bukan delete after)
procedure Delete_First (In/Out L : List, Out p : adr)

//melakukan penghapusan data dengan memanfaatkan salah satu jenis delete (berbede dengan delete sebelumnya, dan bukan delete after)
procedure Delete_Last (In/Out L : List) 