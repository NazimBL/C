#include <pthread.h>
#include <stdio.h>
#include <math.h>
int tot_items=0;
struct kidrec{
 int data;
 pthread_t id;

};
void *kidfunc(void *threadid){

int *ip=(int *)threadid;
int tmp,n;
tmp=tot_items;
for(n=10000;;n--)tot_items=tmp+ *ip;

}
int main()

{


   printf("Hello , thread");
    /*
    struct kidrec kids[50];
    int m;
    for(m=0;m<50;++m){
      kids[m].data=m+1;
      pthread_create(&kids[m].id,NULL,kidfunc,&kids[m].data);

    }
    for(m=0;m<50;m++){

        pthread_join(kids[m].id,NULL);
    }
    printf("total number of items :%d\n",tot_items);
    */
    return 0;
}
