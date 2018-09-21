#include "ArrayList.h"
#include <stdio.h>
#include <stdlib.h>



//initialiser la list mat,les chaines de paires de ski et locations
List *init(){

List *list=malloc(sizeof(*list));
Ski *element=malloc(sizeof(*element));
Location *loc=malloc(sizeof(*loc));

if(list ==NULL || element== NULL || loc==NULL) printf("Empty list\n");

list->skinbr=0;
element->taille=0;
loc->deb=0;
loc->fin=0;
loc->indice=0;

element->skisuiv=NULL;
loc->locsuiv=NULL;

element->first_loc=loc;
list->first=element;

return list;

}

// insérer une paire de ski d'une taille t dans la liste
void insertski(List *liste,int t){

Ski *nouveau=malloc(sizeof(*nouveau));

//calculer le nombre de paire de ski dans la liste
liste->skinbr++;

if(liste==NULL || nouveau==NULL){

   exit(EXIT_FAILURE);
}

nouveau->taille=t;
nouveau->skisuiv=liste->first;
liste->first=nouveau;

}

//inserer les info de location ( sous list ) dans la chaine de paire de ski
void insertLoc(Ski *ski,int debut,int l_fin,int l_indice){
 Location *nouv=malloc(sizeof(*nouv));

if(ski==NULL ){

   exit(EXIT_FAILURE);
}
nouv->deb=debut;
nouv->fin=l_fin;
nouv->indice=l_indice;

nouv->locsuiv=ski->first_loc;
ski->first_loc=nouv;

//printf("insert loc : %d and %d \n",nouv->deb);

}

//afficher les paire de ski de la liste par taille
void displaySki(List *liste){


    if (!liste == NULL)
    {

    Ski *actuel = liste->first;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->taille);
        actuel = actuel->skisuiv;
    }
    printf("NULL\n");
    }
}

void displayLoc(Ski *ski){


    if (!ski == NULL)
    {

    Location *actuel = ski->first_loc;
      printf("Debut de location : %d\n", actuel->deb);
      printf("Fin de location : %d\n", actuel->fin);

    }

}

//supress 1st element of the list
void suppression(List *liste)
{
    if (liste == NULL)
    {

   exit(EXIT_FAILURE);
    }

    if (liste->first != NULL)
    {

        Ski *aSupprimer = liste->first;
        liste->first = liste->first->skisuiv;
        liste->skinbr--;
        free(aSupprimer);
    }
}
