#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>


int DecideWhichMaterialsToSell(int num1)
{

if (num1=1)
{
printf("poulas kapno kai xartakia ston kapnisth 1");

}
else if (num1=2)
{

printf("poulas xartakia kai spirta ston kapnisth 2");

}
else 
{
printf("poulas kapno kai xartakia ston kapnisth 3");

}
return 0;
}

int main()
{
// το table αρχικοποιειται στο 0 και 
// περνει την τιμη 1 στην 
//καταλληλη θεση που δηλωνει το ποιος καπνιστης θα
//εξυπηρετηθει 
int table[3]={0,0,0};
sem_t seller;
int ret;
sem_t* smoker[3]={0,0,0};
int i;
int num1=rand()%3;
DecideWhichMaterialsToSell(num1);
int sem_wait(sem_t *seller);
sem_wait(&seller);
ret=sem_init(&seller,0,0);
if (num1==1)
{
table[0]+=1;
}
else if (num1==2)
{
table[1]+=1;
}
else
{
table[2]+=1;
}

if (table[0]==1) 
{
printf(" kapnizei o prwtos kapnisths ");
sem_post(&smoker[0]);
sem_init(&smoker[0],1,table[0]);
}
else if (table[1]==1) 
{
printf("kapnizei o deyteros kapnisths");
sem_post(&smoker[1]);
sem_init(&smoker[1],1,table[1]);
}
else
{
printf("kapnizei o tritos kapnisths");
sem_post(&smoker[2]);
sem_init(&smoker[2],1,table[2]);
}

return 0;
}

 
 





