#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>


sem_t sync;
pthread_mutex_t mutex;

int globaldata=5;
void *KidFunction(void *p){

    globaldata++;
  //  pthread_mutex_lock(&mutex);
    printf((char*)p);
//    pthread_mutex_unlock(&mutex);

}
void *Kid(void *p){


    printf("Yo\n");


}

void main()
{
    pthread_t kid,kid2;

    pthread_attr_t attr;
    pthread_t threads[5];
    char hello[]="Hello";
    char th[]="Thread";


    int i=0,rc=0;
    pthread_attr_init(&attr);
    pthread_mutex_init(&mutex,NULL);


    pthread_create(&kid,&attr,KidFunction,(void*)hello);
    pthread_create(&kid2,NULL,Kid,NULL);
    /*
    pthread_mutex_lock(&mutex);
    printf(th);
    pthread_mutex_unlock(&mutex);
*/
   //pthread_exit(NULL);
   //printf("thread id %d\n",globaldata);

    for(i=0;i<5;i++){
            printf("Creating thread %d\n",i);
      rc= pthread_create(&threads[i],NULL,KidFunction,(void*)i);
      //pthread_join(threads[i],NULL);

      if(rc)printf("Error code is %d\n",rc);
    }
    //pthread_exit(NULL);
    //pthread_join(kid,NULL);



}
