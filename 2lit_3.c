#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <string.h>
#include <sched.h>



sem_t semaphore1;
sem_t semaphore2;
void *system1()
{
{
sem_post(&semaphore1);
char *command;
strcpy(command,"ls");
printf("ls command....\n");
system(command);

}

return 0;


}

void *system2()
{
char *command;
strcpy(command,"date");
printf("date command...\n");
system(command);
return 0;
}

int main()
{
int i;
int x;
int tmp1,tmp2;
int t1,t2;
tmp1=sem_init(&semaphore1,0,0);
tmp2=sem_init(&semaphore2,0,0);
pthread_t thread1;
pthread_t thread2;
t1=pthread_create(&thread1,NULL,system1,&tmp1);
t2=pthread_create(&thread2,NULL,system2,&tmp2);
for (i=1; i<=5; i++)
{
if (i!=5)
{
if (i=1)
 pthread_join(t1,NULL);
printf("Thread %d created from t1 process",i);
 pthread_join(t2,NULL);
printf("Thread %d created from t2 process",i+1);
}
else if(i=2)
{
pthread_join(t2,NULL);
printf("Thread %d created from t2 process",i+1);
 pthread_join(t1,NULL);
printf("Thread %d created from t1 process",i+3);
}
else if (i=3)
{
 pthread_join(t2,NULL);
printf("Thread %d created from t2 process",i+3);
 pthread_join(t1,NULL);
printf("Thread %d created from t1 process",i+5);
}
else if (i=4)
{
 pthread_join(t1,NULL);
printf("Thread %d created from t1 process",i+5);
 pthread_join(t1,NULL);
printf("Thread %d created from t1 process",i+4);
}
else
{
 pthread_join(t2,NULL);
printf("Thread %d created from t2 process",i-1);

}

}
}




