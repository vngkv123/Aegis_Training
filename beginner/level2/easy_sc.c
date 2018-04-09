#include <stdio.h>
#include <string.h>
#include <unistd.h>

void vuln(void){
	char buf[0x100] = {0, };
	gets(buf);
}

int main(int argc, char *argv[]){
	puts("This is Easy x86 shellcode Exploit");
	vuln();
	return 0;
}
