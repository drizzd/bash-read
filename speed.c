#include <stdint.h>
#include <stdio.h>
#include <time.h>
#define MAX_COUNT 100000000
int main()
{
	uint64_t i;
	clock_t start, end;
	start = clock();
	i = 0;
	while (i < MAX_COUNT) {
		i++;
	}
	end = clock();
	double cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
	printf("CPU time: %.3fs\n", cpu_time);
	printf("Countrate: %.0fMHz\n", (1e-6*MAX_COUNT)/cpu_time);
	return 0;
}
