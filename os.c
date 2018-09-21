#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define n 10

int array[]={10,-2,4,7,5,0,-9,6,1,3,-5};
int i,j,temp;
int main()
{
    int pid=0,pi=2;
    //pid=fork();

    if(pid==0){

        ascSort();
        printf("Child ascending sorting\n");
        for(i=0;i<n;i++)printf("%d\n",array[i]);
    }
    if(pi==2){

        descSort();
        printf("Parent Descending sorting\n");
        for(i=0;i<n;i++)printf("%d\n",array[i]);

    }

    return 0;
}

void descSort(){
for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
        if(array[j]<array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
}
}
void ascSort(){
for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
        if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
}
}

