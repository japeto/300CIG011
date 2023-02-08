#ifndef __common_h__
#define __common_h__

#include <sys/stat.h>
#include <assert.h>
#include <time.h>
#include <math.h>

void Spin(int longvalue){
	struct timespec spec;

	clock_gettime(CLOCK_REALTIME, &spec);

	double ts = spec.tv_sec;
	while((spec.tv_sec - ts) < (double) longvalue){
		ts = ts + 1; // ts++;
		printf(">> %f", ts);
	}
}

#endif // __common_h_

