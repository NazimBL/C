#ifndef ARRAYLIST_H_INCLUDED
#define ARRAYLIST_H_INCLUDED
typedef struct Location Location;
struct Location
{

int deb;
int fin;
int indice;
Location* locsuiv;

};

typedef struct Ski Ski;
struct Ski
{

int taille;
Location* first_loc;
Ski* skisuiv;

};

typedef struct List List;
struct List
{

int  skinbr;
Ski* first;

};

List *init();
void insertski(List *liste,int t);
void insertLoc(Ski *ski,int debut,int l_fin,int l_indice);

void displaySki(List *liste);
void displayLoc(Ski *ski);

void suppression(List *liste);


#endif // ARRAYLIST_H_INCLUDED
