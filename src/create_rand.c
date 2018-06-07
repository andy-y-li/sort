#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "create_rand.h"

int create_rand(int *list,int len)
{
	time_t t;
	int i;

	if (list == NULL || len == 0){
		fprintf(stderr,"parameter error!\n");
		exit(1);
	}

	srand((unsigned)time(&t));
	for (i = 0;i < len;i++){
		list[i] = rand() % 100;
	}
	return 0;
}

void show(int *list, int len)
{
    for (int i = 0; i < len; i++ )
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}
