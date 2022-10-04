#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdbool.h>
#define noop (void)0

int main()
{
int N;
int i;
 printf("Dwse moy to N opoy einai o ari8mos 8hgatrikwn /n");
 scanf("%d", &N);
 pid_t pid[N];
 int SA[N];
 int choosing[N];
 int k,j;
 int max=SA[0];
 for (i=0; i<N; i++) 
 { 
 pid[i]=fork();
 choosing[i]=true;
 pid_t wpid = waitpid(pid[i],choosing[i],0);
 if (WIFEXITED (choosing[i]))
 {
 
 while (choosing[j]==1)
 {
   for (j=0; j<i; j++)
{  
for (k=0; k<N; k++)
 {if (SA[k] > max)
 {
 max=SA[k]+1;
 }
while ((SA[j]!=0) AND ((SA[k],k)> (SA[j],j)))
{

 choosing[i]=false;
}
}
 
 }
 }
 choosing[i]=true;
 
 }
 WEXITSTATUS(choosing[i]);
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
