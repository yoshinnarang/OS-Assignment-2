Name: Yoshin narang
Roll_Number: 2019221
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

static int count = 10;
void *functionA(){
    // int count = 10;
     while (count <= 100)
    {
        
        printf("pid = %d, i = %d\n", getpid(), count);
        count++;
    }
    // while(count>=-90){
    //      printf("pid = %d, i = %d\n", getpid(), count);
    //     count--;
    //  }
 }
 void *functionB(){
    //  int count = 10;
     while(count>=-90){
         printf("pid = %d, i = %d\n", getpid(), count);
        count--;
     }
 }
 int main(){
     
     pthread_t thread1;
     pthread_t thread2;
     void *functionA();
     void *functionB();
     pthread_create(&thread1, NULL, functionA,NULL) ;
     pthread_create(&thread2, NULL, functionB,NULL) ;
    //  int pthread_join( thread1,NULL) ;
    //  int pthread_join( thread2,NULL) ;
     
     pthread_exit(NULL);
 }
 
