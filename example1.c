#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arr[5000];
typedef struct args{
	int first;
	int last;
} MY_ARGS;

void* myfunc1(void* args) {
	int s1 = 0;
	for(int i = 0; i < 2500; i++){
		s1 += rand() % 50;	
	}
	printf("s1: %d\n", s1); 
	return NULL;
}

void* myfunc2(void* args) {
	int s2 = 0;
	for(int i = 2500; i < 5000; i++) {
		s2 += rand() % 50;
	}
	printf("s2: %d\n", s2);
	return NULL;
}

int main(){
	pthread_t th1;
	pthread_t th2;
	MY_ARGS args1 = {0, 2500};
	MY_ARGS args2 = {2500, 5000};
	pthread_create(&th1, NULL, myfunc1, NULL);
	pthread_create(&th2, NULL, myfunc2, NULL);
	pthread_join(th1, NULL);	
	pthread_join(th2, NULL);
	
	return 0;
}
