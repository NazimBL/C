#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Names.h"
#include "Stack.h"
#include <stdbool.h>
int main()
{


     printf("Queue\n");
     printf("-------------------------------------\n");

    insertFirst("Nazim","Bellabaci",22);
    insertFirst("Abdennour","Chaoui",23);
    insertFirst("Ahmed","Bentaleb",19);
    printList();
    deleteName(1);
    printList();
    reversePrint();


    return 0;
}


void Qtest(){
    printf("Stack\n");
    printf("-------------------------------------\n");
    push("Chaoui","Abdennour",23);
    push("Bellabaci","Nazim",21);
    SprintList();
    pop();
    SprintList();

}



