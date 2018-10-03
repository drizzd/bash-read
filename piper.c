#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int pipefd[2];
	int status;
	pid_t cpid;

	if (pipe(pipefd) == -1 ) {
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	cpid = fork();
	if (cpid == -1) {
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (cpid == 0) {
		char buf;
		close(pipefd[1]);
		while (1) {
			ssize_t bytes_read = read(pipefd[0], &buf, 1);
			if (bytes_read < 0) {
				perror("read");
				exit(1);
			} else if (bytes_read == 0) {
				break;
			}
		}

		close(pipefd[0]);
		_exit(EXIT_SUCCESS);
	} else {
		int i;
		close(pipefd[0]);
		for (i = 0; i < 10000; i++) {
			write(pipefd[1], "yes kajsldfjasldkfj alskdjf lksadj\n", 35);
		}
		close(pipefd[1]);
		wait(NULL);
		exit(EXIT_SUCCESS);
	}
}
