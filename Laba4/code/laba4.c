extern int proc(short *m, short *n, int u);
#include <stdio.h>
#include "data.h"
#define COUNT  256
short a[256] = {A_ARRAY};
short x[256] = {X_ARRAY};
int y = 0;
/* Main Code */
main()
{
y = proc(a, x, COUNT);
printf("y = %x hex (%d decimal)\n", y, y);
}