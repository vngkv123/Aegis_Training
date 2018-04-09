#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void win(void){
	system("/bin/sh");
}

void vuln(char *data){
	char buffer[0x20] = {0, };
	memcpy(buffer, data, strlen(data));
}

int main(int argc, char *argv[]){
	puts("Hello, This is Aegis Pwnable Beginner Class @_@");
	puts("[+] level1 -> overwrite stack return address !");
	vuln(argv[1]);
	return 0;
}
