#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

clock_t start,finish;
double delta;

void Bucket_Sort(int array[], int n)
{
    int i, j;
    int count[n];
    for (i = 0; i < n; i++)
        count[i] = 0;

    for (i = 0; i < n; i++)
        (count[array[i]])++;

    for (i = 0, j = 0; i < n; i++)
        for(; count[i] > 0; (count[i])--)
            array[j++] = i;
}

int main()
{
    int array[100], i, num=5;

    printf("Enter the size of array : ");
    scanf("%d", &num);
    printf("Enter the %d elements to be sorted:\n",num);
    for (i = 0; i < num; i++)
        scanf("%d", &array[i]);
        array[i]=rand();
    printf("\nThe array of elements before sorting : \n");
    for (i = 0; i < num; i++)
        printf("%d ", array[i]);
    printf("\nThe array of elements after sorting : \n");
    start=clock();
    Bucket_Sort(array, num);

    finish=clock();
    delta=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("\nTime elapsed: %f\n",delta);
    for (i = 0; i < num; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
