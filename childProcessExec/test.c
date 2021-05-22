#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("argc : %d\n", argc);
	printf("argv[1] : %s\n", argv[1]);
	printf("Hello world from C!!");
	fprintf(stderr, "\x1b[33mThis is err message...\x1b[39m\n");

	FILE *fp;
	fp = fopen("./data.txt", "w");
	if(fp == NULL) return 1;
	fprintf(fp, "This is data");
	fclose(fp);

	return 0;
}
