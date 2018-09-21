#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct Node{

int data;
Node* next;

}Node;

Node* top=NULL;

void push(int x){

Node* temp=malloc(sizeof(Node));
temp->data=x;
temp->next=top;
top=temp;

}
void pop(){
if(top==NULL)return;
Node* temp=malloc(sizeof(Node));
temp=top;
top=top->next;
free(temp);

}

#endif // STACK_H_INCLUDED
