#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void usage()
{
	fprintf(stderr, "usage: seq LAST\n");
	exit(1);
}

int main(int argc, const char **argv)
{
	long int last;
	long int i;
	char *endptr;
	if (argc != 2) {
		usage();
	}
	last = strtol(argv[1], &endptr, 10);
	if (errno == ERANGE) {
		fprintf(stderr, "seq: out of range\n");
		exit(1);
	}
	if (endptr != argv[1] + strlen(argv[1])) {
		fprintf(stderr, "seq: parse error\n");
		exit(1);
	}
	if (last < 1) {
		usage();
	}
	//setvbuf(stdout, NULL, _IOFBF, 4096);
	for (i = 1; i <= last; i++) {
		fputs("yes kajsldfjasldkfj alskdjf lksadj", stdout);
		fputc('\n', stdout);
		//fprintf(stdout, "yes kajsldfjasldkfj alskdjf lksadj\n");

		//if ((last & 128-1) == 0) {
		//	fflush(stdout);
		//}
		//fprintf(stdout, "%d\n", i);
		//fflush(stdout);
	}
	return 0;
}
