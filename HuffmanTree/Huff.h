#ifndef HUFF_H_INCLUDED
#define HUFF_H_INCLUDED

typedef struct Node{

char data;
int frequency;
struct Node* left;
struct Node* right;
struct Node* parent;


}Node;

Node* newN(int freq,char x){

 Node* newNode=malloc(sizeof(Node));
 newNode->data=x;
 newNode->frequency=freq;
 newNode->left=NULL;
 newNode->right=NULL;
 return newNode;
}

void buildHuffman(char *arr,int *freqs,int length){


}

void sortArray(int *f,char *a){

int i=0,j=0;
for(i=0;i<5;i++){

    for(j=0;j<4;j++)
    if(f[j]>f[j+1]){
        int temp=f[j];
        char tempChar=a[j];
        f[j]=f[j+1];
        a[j]=a[j+1];
        f[j+1]=temp;
        a[j+1]=tempChar;

    }
}

}



#endif // HUFF_H_INCLUDED
