#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>*/

int main(int argc, char *argv[]) {
	int countAmount = argc > 1 ? atoi(argv[1]): 0;
	int childNumber = argc > 2 ? atoi(argv[2]): 0;
	sleep(10);
	
	for(int i = 1; i <= countAmount; i++){
		printf("Child: %d Count: %d\n", childNumber, i);
		sleep(10);
	}

	return 0;
}
