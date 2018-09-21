#ifndef NAMES_H_INCLUDED
#define NAMES_H_INCLUDED
#include <stdbool.h>
#include <string.h>

// we sue type def to not repeat strut at each call

typedef struct NameList{

    struct NameList* next;
    char *names;
    char *Fname;
    int age;


}NameList;


 NameList *first = NULL;
 NameList *last = NULL;

 void init(){
    NameList *current=NULL;
    current->names="";
    current->Fname="";
    current->age=0;
    current->next=NULL;
    printf("Initialized empty list\n");

 }


 int length() {
   int length = 0;
   NameList *current;
//if list is empty
   if(first == NULL) {
      return 0;
   }

   for(current = first; current != NULL; current = current->next) {
      length++;
   }

   return length;
}

//display the list

void printList() {
   NameList *ptr = first;
   if(first == NULL) {
      return NULL;
   }
   printf("Listing ....");
   printf("[\n");


   //start from the beginning
   while(ptr != NULL) {

      printf("First Name : %s\n",ptr->names);
      printf("Family Name : %s\n",ptr->Fname);
      printf("Age : %d\n\n",ptr->age);

      ptr = ptr->next;
   }

   printf("]\n");
}

bool isEmpty() {
   return first== NULL;
}

void insertFirst(char *data,char *n,int a) {
   //create a link
   NameList *link =malloc(sizeof(NameList));

   link->names = data;
   link->Fname=n;
   link->age=a;
   link->next = first;
   first = link;

   printf("Initialized empty list\n");

}



NameList* findName(int key) {


   NameList* current = first;

   //my sit is nul
   if(first == NULL) {
      return NULL;
   }
   int current_index=0;
   while(current!=NULL) {

      if(current_index==key)break;
      if(current->next == NULL) break;
      else current = current->next;
      current_index++;

   }

   return current;
}



void insertName(char *newName,char *newF,int a,int index){

NameList *newNameList;

if(index==0)insertFirst(newName,newF,a);

else{

        NameList *temp=findName(index-1);

        newNameList->next=temp->next;
        temp->next=newNameList;

        newNameList->names = newName;
        newNameList->Fname=newF;
        newNameList->age=a;


}
}
reversePrint(){

    NameList *n=NULL;
    int i;

    printf("\n[\n");
    for(i=length();i>=0;i--){
        n=findName(i);
        printf("Names : %s\n",n->names);
        printf("FNames : %s\n",n->Fname);
        printf("age : %d\n",n->age);

    }
    printf("]\n");

}

void deleteName(int p){
 //if list is empty
   if(first == NULL) {
      return NULL;
   }
   NameList *previous=findName(p-1);
   NameList *current=findName(p);

   if(current==first)first=first->next;

   else {
        previous->next=current->next;
        current->next=NULL;
   }

 }


 NameList* searchName(char *s1){

    NameList *c=first;
    if(first == NULL) {
      return NULL;
   }
    while(c!=NULL){

        int res=strcmp(s1,c->names);
        if(res==0)return c;

        c=c->next;
    }

 }

int searchNamePosition(char *s1){

    NameList *c=first;
    int position=0;
    if(first == NULL) {
       printf("Liste is empty\n");
      return 100;
   }
    while(c!=NULL){

        int res=strcmp(s1,c->names);
        if(res==0)return position;
        position++;

        c=c->next;
    }

 }

#endif // NAMES_H_INCLUDED
