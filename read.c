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
                //fprintf(stdout, "%d\n", i);
        }
        return 0;
}
