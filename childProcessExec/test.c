#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	printf("argc : %d\n", argc);
	printf("argv[1] : %s\n", argv[1]);
	printf("Hello world from C!!\n");
	fprintf(stderr, "\x1b[33mThis is err message...\x1b[39m\n");

	FILE *fp;
	char buf[256];
	memset(buf, 0, sizeof(buf));
	fp = fopen("./data.txt", "a");
	if(fp == NULL) return 1;
	fgets(buf, sizeof(buf), fp);
	if(strcmp(buf, "") == 0){
		printf("create new file.\n");
		fprintf(fp, "This is data,%s,%s,%s", "yuya", "26", "0");
	}else{
		printf("file already exist.\n");
	}
	fclose(fp);

	return 0;
}
