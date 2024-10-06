#include <iostream>

#define first(L) (L).first
#define next(P) (P)->next
#define info(P) (P)->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct  elmlist {
    /* data */
    infotype info;
    address next;
};  

struct list {
    /* data */
    address first;
};

address allocate(infotype x);

void createList(list &L);
void insertFirst(list &L, address p);
void printInfo(list L);