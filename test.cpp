#include "SSL.h"
#include <iostream>

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


PSEUDOE CODE 

procedure Create_List (In/Out L : List)
{I.S. : L dari sembarang nilai dari strcut list}
F.S. : L terdefinisi}

kamus data
..........

algoritma
first(L) <- NULL

endprocedure


function New_Element (data : infoType) -> adr
{Function akan membuat elemen baru berisi data dan mengembalikan pointer yang menyimpan alamat dari elemen tersebut}

kamus data
p : adr

algoritma
allocate(p)
info(p) <- data
next(p) <- NULL
return p

endfunction


procedure Insert_First (In/Out L : List, In p : adr)
{I.S. Terdefinisi List L yang mungkin kosong dan sebuah elemen baru yang alamatnya disimpan oleh pointer P
F.S. Elemen baru telah masuk menjadi elemen paling pertama di list L}

kamus data
.........

algoritma
next(p) <- first(L)
first(L) <- p

endprocedure


procedure Insert_Last (In/Out L : List, In p : adr)
{I.S. Terdefinisi List L yang mungkin kosong dan sebuah elemen baru yang alamatnya disimpan oleh pointer P
F.S. Elemen baru telah masuk menjadi elemen paling akhir di list L}

kamus data
last : adr

algoritma
    if first(L) == NULL then
        first(L) <- p
    else
        last <- first(L)
        while next(last) not NULL do
            last <- next(last)
        endwhile
        next(last) <- p
    endif

endprocedure


procedure Insert_After (In/Out L : List, In prec : adr, In p : adr)
{I.S. Terdefinisi List L yang mungkin kosong, sebuah elemen baru yang alamatnya disimpan oleh pointer P dan pointer prec
F.S. Elemen baru telah masuk menjadi elemen setelah elemen yang alamatnay disimpan oleh pointer prec }

kamus data
........

algoritma
    if prec not NULL then
        next(p) <- next(prec)
        next(prec) <- p
    endif

endprocedure


procedure Delete_First (In/Out L : List, Out p : adr)
{I.S. Terdefinisi List L yang mungkin kosong atau Cuma memiliki 1 elemen.
F.S. Jika list kosong, maka pointer P di assign dengan NIL, jika tidak kosong maka elemen paling awal dihapus dari List L, alamatnya disimpan oleh pointer p}

kamus data
........

algoritma
    if first(L) not NULL then
        p <- first(L)
        first(L) <- next(first(L))
        next(p) <- NULL
    endif

endprocedure


procedure Delete_Last (In/Out L : List, Out p : adr)
{I.S. Terdefinisi List L yang mungkin kosong atau Cuma memiliki 1 elemen.
F.S. Jika list kosong, maka pointer P di assign dengan NIL, jika tidak kosong maka elemen paling akhir dihapus dari List L, alamatnya disimpan oleh pointer p}

kamus data
last, prev : adr

algoritma
    if first(L) == NULL then
        p <- NULL
    elseif next(first(L)) == NULL then
        p <- first(L)
        first(L) <- NULL
    else
        prev <- NULL
        last <- first(L)
        while next(last) not NULL do
            prev <- last
            last <- next(last)
        endwhile
        p <- last
        next(prev) <- NULL
    endif

endprocedure


procedure Delete_After (In/Out L : List, In prec : adr, Out p : adr)
{I.S. Terdefinisi List L yang mungkin kosong, sebuah elemen baru yang alamatnya disimpan oleh pointer P dan pointer prec
F.S. Elemen baru telah masuk menjadi elemen setelah elemen yang alamatnay disimpan oleh pointer prec }

kamus data
........

algoritma
    if prec not NULL and next(prec) not NULL then
        p <- next(prec)
        next(prec) <- next(p)
        next(p) <- NULL
    endif

endprocedure


procedure Show (In L : List)
{I.S. Terdefinisi List L yang mungkin kosong.
F.S. Jika list kosong maka tampilkan ke layar “list kosong”, jika tidak maka seluruh data pada list ditampilkan ke layar}

kamus data
p : adr

algoritma
p <- first(L)
    if p == NULL then
        tampilkan “List kosong”
    else
        while p not NULL do
            output("Nama Barang : ", info(p).nama)
            output("Jenis Barang : ", info(p).jenis)
            output("Harga Barang : ", info(p).harga)
            p <- next(p)
        endwhile
    endif

endprocedure