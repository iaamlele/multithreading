#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arr[5000];
int s = 0;

pthread_mutex_t lock;

void* myfunc(void* args) {
	for(int i = 0; i < 10000; i++){
		s += 1;	
	}
	return NULL;
}

int main(){
	pthread_t th1;
	pthread_t th2;
	pthread_mutex_init(&lock, NULL);

	pthread_create(&th1, NULL, myfunc, NULL);
	pthread_create(&th2, NULL, myfunc, NULL);
	pthread_join(th1, NULL);	
	pthread_join(th2, NULL);	
	printf("s = %d\n", s);
	return 0;
}
