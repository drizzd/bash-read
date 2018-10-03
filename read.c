#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define BUFSIZE 1
char buf[BUFSIZE];
int main()
{
	while (1) {
		int i;
		i = read(0, buf, BUFSIZE);
		if (i < 0) {
			perror("read");
			exit(1);
		} else if (i == 0) {
			break;
		}
	}
	return 0;
}
