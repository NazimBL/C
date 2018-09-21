#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"

int nbskis(List* list ){

return list->skinbr;

}

int skit(List* list){

return list->first;
}

int nbjloc(Location  *loc){

    int debut=loc->deb;
    int fin=loc->fin;

return fin-debut;
}

int main()
{

// initilaliser la list avant toute operation
List *maList=init();

  // voila cmt inserer des paires de ski dans la liste
  //4,8 et 15 = les tailles
    insertski(maList, 4);
    insertski(maList, 8);
    insertski(maList, 15);

    // afficher la liste de paire de ski
    displaySki(maList);

     Ski *ski=maList->first;
//insérer une location pour une paire de ski
// 21 = debut de location , 100 = fin de location , 0 c'est l'indice
     insertLoc(ski,21,100,0);

     //afficher les info de location pour une paire de ski
     displayLoc(ski);

// Les onctions demandé dans l 1er exo:


printf("nombre de paire de ski : %d\n",nbskis(maList));
printf("l'adresse de la 1st cellule : %d\n",skit(maList));

  Location *loc=ski->first_loc;

printf("nombre de jours de location : %d\n",nbjloc(loc));



    return 0;
}
