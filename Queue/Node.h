#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include "LinkedList.h"


void ReversePrint(Node *p){

if(p==NULL)return;

ReversePrint(p->next);
printf("%d",p->data);

}
void Print(Node *p){

if(p==NULL)return;

printf("%d",p->data);
Print(p->next);

}


#endif // NODE_H_INCLUDED
