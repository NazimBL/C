#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef struct Node{

int data;
Node* next;

}Node;

Node* head=NULL;
Node* tail=NULL;

bool isEmpty(){

if(head==NULL && tail ==NULL)return true;
else return false;

}
void Enqueue(int x){

Node* temp=malloc(sizeof(Node));
temp->data=x;
temp->next=NULL;

if(isEmpty()){

   tail=temp;
   head=temp;
   free(temp);
   return;
}
tail->next=temp;
tail=temp;
free(temp);

}
void DeQueue(){
Node* temp=malloc(sizeof(Node));
temp=head;
if(isEmpty())return;
head=temp->next;
free(temp);

}



#endif // QUEUE_H_INCLUDED
