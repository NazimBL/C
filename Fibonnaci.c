#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t start,finish;

    start=clock();
    int i=recursive_fib(55);
    finish=clock();
    double delta=(double)(finish-start)/CLOCKS_PER_SEC;

    printf("Recursive elapsed time : %f\n",delta);

    start=clock();
    fib(55);
    finish=clock();
    delta=(double)(finish-start)/CLOCKS_PER_SEC;

    printf("Non Recursive elapsed time : %f\n",delta);
    return 0;
}

int recursive_fib(int n){

  if(n <= 1) return n;
  else return recursive_fib(n-1) + recursive_fib(n-2);

}

int fib(int n){
 if(n <= 1) return n;

 int fibo = 1;
 int fiboPrev = 1;
 int i;
 for(i = 2; i < n; ++i){

  int temp = fibo;
  fibo += fiboPrev;
  fiboPrev = temp;

 }
 return fibo;
}



