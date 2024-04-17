#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>*/
int main(int argc, char *argv[]) {
	int countAmount = argc > 1 ? atoi(argv[1]): -1;
	

	
	if(countAmount <= 0){
		printf("Error: The Inputed Number is invalid\n");
		return 0;
	}
	
	int forkCount = argc > 2 ? atoi(argv[2]): 2;
	char* childNumber = "";
	for(int i = 1; i <= forkCount; i++){
		
		int x = fork();
		
		if(x == 0){
			childNumber = itoa(i);
			strcpy(childNumber, itoa(i));
			argv[2] = childNumber;
			exec("childCounter", argv);
		} 
	}


	if(wait(0) < 0){
		printf("Nothing to wait on");
	}

	return 0;
}
