#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void win(void){
	system("/bin/sh");
}

int main(int argc, char *argv[]){
	puts("You know how to input non-ascii value? ( 0x20 ~ 0x7f )");
	int check;
	char buf[0x100] = {0, };
	gets(buf);
	if( check != 0xdeadbeef ){
		puts("Wrong");
		exit(-1);
	}
	return 0;
}
