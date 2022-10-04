#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <stdbool.h>


struct record
{
int value;
}record;

struct node 
{ 
void **pointers;
int *keys;
struct node *parent;
bool is_leaf;
int num_keys;
struct node *next;
}node;

int order=ORDER;
node queue=NULL;
bool verbosa_output=false;
void engueue(node *new_node);




int g=0;
void *mythread(void *vargp)
{ 
int *myid=(int *)vargp;
static int s=0;
++s; ++g;
printf("thread id : %d,static: %d,global: %d\n", *myid,++s,++g); 
}



int main()
{
int N;
pid_t pid;
int i;
int child_status;
for (i=0; i<N; i++)
{
int pid=fork();
if (pid >0)
{ 
printf("%3i (parent) \n",i);
}
else
{
printf("%3i (child) \n", i);


}

}
}







