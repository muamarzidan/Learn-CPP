#include <iostream>
#define first(L) (L).first
#define next(P) (P)->next
#define info(P) (P)->info

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
}

struct List {
    address first;
};