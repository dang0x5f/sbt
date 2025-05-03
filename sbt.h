#ifndef SBT_H_
#define SBT_H_

#include <stdio.h>
#include <sys/time.h>

struct timeval tvp1 , tvp2;
struct timezone tzp1 , tzp2;

void start_sbt(void);
void end_sbt(void);

#endif // SBT_H

#ifdef SBT_IMPLEMENTATION

void start_sbt(void)
{
    gettimeofday(&tvp1, &tzp1);
}

void end_sbt(void)
{
    gettimeofday(&tvp2, &tzp2);

    int diff_sec = tvp2.tv_sec - tvp1.tv_sec;
    int diff_ms  = tvp2.tv_usec - tvp1.tv_usec;
    printf("%ds %dms\n", diff_sec, diff_ms);
}

#endif // SBT_IMPLEMENTATION
