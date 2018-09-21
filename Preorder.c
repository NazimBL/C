#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5


bool isBst(int a[],int first,int last);
int main()
{
     int preOrder[MAX]={40, 30, 35, 80, 100};
     int first=0,last=MAX-1;


     bool x=isBst(preOrder,first,last);
     printf("%d",x);

    return 0;
}

bool isBst(int a[],int first,int last){

    int root=a[first];
    int i,j=first;
    if(last<2)return true;
    else {

        //finds index of the node greater than root
       while(j<=last){

        if(a[j]>root)break;
        j++;

       }

       // first condition
       for(i=j;i<=last;i++){
        if(a[i]<root)return false;
       }

        //reccursive call
       // bool left=isBst(a,first+1,j-1);
       // bool right=isBst(a,j,last);
        //return left && right;
    return (isBst(a,first+1,j-1))&& (isBst(a,j+1,last-1));

    }



}
