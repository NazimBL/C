
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct Stack{

    struct Stack* next;
    char *names;
    char *Fname;
    int age;

}Stack;

  Stack  *top = NULL;


  void Sinit(){
    Stack *current=NULL;
    current->names="";
    current->Fname="";
    current->age=0;
    current->next=NULL;


 }

 bool SisEmpty() {
   return top== NULL;
}

 void push(char *data,char *n,int a) {
   //create a link
   Stack *link =malloc(sizeof(Stack));

   link->names = data;
   link->Fname=n;
   link->age=a;

   link->next = top;
   top = link;

}

void pop(){

Stack *cur=NULL;
cur=top->next;
top=cur;
free(cur);

}

void SprintList() {
   Stack *ptr = top;
   if(top == NULL) {
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
#endif // STACK_H_INCLUDED


