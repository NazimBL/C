#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void create(int []);
void down_adjust(int [],int);
clock_t start,finish;

void main()
{
    int heap[10],n=10,i,last,temp;
    int data[10];
    double delta;

    /*
    printf("Bubble Sort :\n");
     //filling array with random numbers
     for(i=0;i<n;i++)data[i]=rand();
     //start time
    start=clock();
    bubbleSort(data,10);
    //finish time
    finish=clock();
    delta=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("\nTime elapsed: %f\n",delta);

    printf("\nArray after sorting:\n");
    for(i=0;i<n;i++)printf("%d ",data[i]);
        */

    printf("Heap Sort :\n");
    for(i=1;i<=n;i++)heap[i]=rand();
    //create a heap
    start=clock();
    heap[0]=n;
    create(heap);
    //sorting
    while(heap[0] > 1)
    {
        //swap heap[1] and heap[last]
        last=heap[0];
        temp=heap[1];
        heap[1]=heap[last];
        heap[last]=temp;
        heap[0]--;
        down_adjust(heap,1);
    }
    finish=clock();
    delta=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("\nTime elapsed: %f\n",delta);
    //print sorted data
    printf("\nArray after sorting:\n");
    for(i=1;i<=n;i++)printf("%d ",heap[i]);

    printf("Merge Sort is \n");
    start=clock();
    mergeSort(arr, 0, arr_size - 1);
    finish=clock();
    delta=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("\nTime elapsed: %f\n",delta);
    printf("\nSorted array is \n");
    for(i=1;i<=n;i++)printf("%d ",heap[i]);


}


void create(int heap[])
{
    int i,n;
    n=heap[0]; //no.. of elements
    for(i=n/2;i>=1;i--)
        down_adjust(heap,i);
}

void down_adjust(int heap[],int i)
{
    int j,temp,n,flag=1;
    n=heap[0];

    while(2*i<=n && flag==1)
    {
        j=2*i;
        if(j+1<=n && heap[j+1] > heap[j])
            j=j+1;
        if(heap[i] > heap[j])
            flag=0;
        else
        {
            temp=heap[i];
            heap[i]=heap[j];
            heap[j]=temp;
            i=j;
        }
    }
}

void bubbleSort(int a[],int n){

    int i=0,j=0,tempo=0;
    for(i=0;i<n;i++){

        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                tempo=a[j];
                a[j]=a[j+1];
                a[j+1]=tempo;
            }
        }

    }

}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)L[i] = arr[l + i];
    for (j = 0; j < n2; j++)R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}



