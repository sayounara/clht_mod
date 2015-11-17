#include <stdio.h>
#include <pthread.h>

typedef unsigned short uint8_t;
int num = 0;
void fun()
{
	printf("%d\n",num++);
	if(num==2)
		while(1111)
			;
}

int main()
{
// pthread_attr_t attr;

 // pthread_attr_init(&attr);
// pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
   
	pthread_t threads[3];
	int i =0;
	for(i=0; i<3;i++)
	{
		pthread_create(&threads[i],NULL,fun,(void*)NULL);
	}

	for(i=0; i<3;i++)
	{
		pthread_join(threads[i],NULL);
		printf("hello\n");
	}
	
	printf("01010\n");
	return 0;
}
