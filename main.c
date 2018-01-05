#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		fprintf(stderr, "Useage: \n");
		exit(1);
	}
	int i;
	for(i = 1; i < argc; i++){
		if(rmdir(argv[i]) < 0){
			perror(argv[i]);
			exit(1);
		}
	}
	return 0;
}
