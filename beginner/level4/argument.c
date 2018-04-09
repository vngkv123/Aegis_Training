#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void win(int checksum){
	if( checksum == 0xc0dec4fe ){
		puts("Get shell @_@");
		system("/bin/sh");
	}
}

void vuln(void){
	char buf[0x100] = {};
	gets(buf);
}

int main(int argc, char *argv[]){
	vuln();
	return 0;
}
