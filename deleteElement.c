#include <stdio.h>
#include <stdlib.h>

int a[]={1,2,3};
int k=2,i=0,n=3;
int j=3;
int main()
{

    for(i=0;i<n;i++)printf("%d ",a[i]);
    for (j=n;j>=k;j--)a[j+1]=a[j];


    //n++;
    a[k]=45;
    printf("Hello world!\n");

    for(i=0;i<n;i++)printf("%d ",a[i]);

    return 0;
}
