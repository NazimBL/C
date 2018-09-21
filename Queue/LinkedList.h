#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED


typedef struct Node{
int data;
struct Node* next;

}Node;

Node* first=NULL;

void InsertFirst(int x){

Node* temp=malloc(sizeof(Node));
temp->data=x;
temp->next=first;
first=temp;

}

#endif // LINKEDLIST_H_INCLUDED
